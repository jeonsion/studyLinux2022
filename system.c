#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int system(const char *cmdstring)
{
    pid_t pid; int status;

    if(cmdstring == NULL)  //명령어가 NUll인 경우
        return(1);
    if ( (pid = fork() < 0) )   //프로세스 생성실패
        status = -1;
    else if(pid == 0){
        execl("/bin/sh", "sh", "-c", cmdstring, (char *) 0);
        _exit(127);
    }else{
        while(waitpid(pid, &status, 0) < 0){
           if(errno != EINTR){
                status = -1;
                break;
            }
        }   
    }
    return(status);
}

int main(){
    int status;
    if((status = system("date")) < 0 )
        perror("system() 오류");
    printf("종료코드 %d\n", WEXITSTATUS(status));
   
    if((status = system("hello")) < 0 )
        perror("system() 오류");
    printf("종료코드 %d\n", WEXITSTATUS(status));

    if((status = system("who; exit 44")) < 0 )
        perror("system() 오류");
    printf("종료코드 %d\n", WEXITSTATUS(status));


}