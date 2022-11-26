#! /bin/bash
# 사용법 : ./lshead.bash 디렉터리 출력할개수
lshead()    {
    echo "함수 시작, 매개변수 $1 , $2"
    date
    echo "디렉토리 $1 내의 처음 $2개 파일만 리스트"
    let num=$2+1        #매개변수에 1증가시키는 부분    ls-l하면 total 을 포함하기 때문에
    ls -l $1 | head -$num  
}
echo "안녕하세요 함수 호출 시작"

if (( $# != 2 ))    #입력받은 인수가 없다면
then
    echo "사용법 : $0 디렉터리 출력할 파일개수"
    exit 1
else
    lshead $1 $2
    exit 0
fi