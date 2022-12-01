#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()  {
    printf("부모 프로세스 시작 \n");
    if (fork()==0){
        execl("/usr/bin/ls", "AAA", "/", NULL);       //루트 디렉터리 출력하기 ls로 바꿔서
        fprintf(stderr, "첫번째 실패");
        exit(1);
    }
    printf("부모 프로세스 끝\n");
}