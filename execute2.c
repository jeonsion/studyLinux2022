#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//세 개의 자식 프로세스를 생성하여 각각 다른 명령어를 실행한다.

int main()  {
    printf("부모 프로세스 시작 \n");
    if (fork()==0){
        execl("/usr/bin/echo", "AAA", "Hello", NULL);       //에코 명령어 실행하기
        fprintf(stderr, "첫번째 실패");
        exit(1);
    }

    if (fork()==0){
        execl("/usr/bin/date", "date", NULL);       //날짜 출력하기
        fprintf(stderr, "첫번째 실패");
        exit(2);
    }

    if (fork()==0){
        execl("/usr/bin/ls", "ls", "-1", NULL);       //ls 옵션 줘서 실행하기
        fprintf(stderr, "첫번째 실패");
        exit(3);
    }




    
    printf("부모 프로세스 끝\n");
}