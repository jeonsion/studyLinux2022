#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

//명령줄 인수로 받은 명령을 실행시킨다.

int main(int argc, char *argv[])  {
       int child, pid, status;
       pid = fork();
       if(pid == 0){
        execvp(argv[1], &argv[1]);
        fprintf(stderr, "%s: 실행불가\n", argv[1]);
       }
       else{
        child = wait(&status);
        printf("[%d] 자식 프로세스 %d 종료\n", getpid(), pid);
        printf("\t 종료코드 %d \n", status>>8);
       }
}