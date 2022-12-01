#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()  {
    int pid, child, status;
    printf("[%d] 부모 프로세스 시작 \n", getpid());
    pid = fork();
    if(pid == 0){   //즉 자식 프로세스라면, 자식 프로세스의 pid를 출력해보자
        printf("[%d] 자식 프로세스 시작 \n", getpid());
        exit(111111111);
    }
    child = wait(&status);  //자식 프로세스가 끝나기를 기다린다.
    printf("[%d] 자식 프로세스스 %d 종료 \n", getpid(), child);
    printf("status : %d", status);
    printf("\t 종료코드 %d\n", status>>8);


}