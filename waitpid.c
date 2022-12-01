#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()  {
    int pid1, pid2, child, status;



    printf("[%d] 부모 프로세스 시작 \n", getpid());
    pid1 = fork();
    if(pid1 == 0){   
        printf("[%d] 자식 프로세스[1] 시작 \n", getpid());  //자식 프로세스 소개하기
        sleep(1);   //시간 끌기
        printf("[%d] 자식 프로세스[1] 종료 \n", getpid());
        exit(11);
    }
    pid2 = fork();
    if(pid2 == 0){   
        printf("[%d] 자식 프로세스 #2 시작 \n", getpid());  //자식 프로세스 소개하기
        sleep(2);   //시간 끌기
        printf("[%d] 자식 프로세스 #2 종료 \n", getpid());
        exit(22);
    }
    //자식 프로세스 #1의 종료를 기다린다.
    child = waitpid(pid1, &status, 0);
    printf("[%d] 자식 프로레스 #1 %d 종료", getpid(), child);
    printf("\t 종료코드 %d\n", status>>8);
    
}