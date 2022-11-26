#! /bin/bash
#사용법 : ./factorial_ver3.bash 인수
# 재귀호출 함수로 구현하기


factorial(){
    num=$1
    if (( $num <=2 ))
    then
        echo $num
    else
        fact=$((num-1))
        fact=$(factorial $fact)
        fact=$((fact*num))
        echo $fact
    fi
}



if [ $# -ne 1 ]
then
    echo 사용법 : $0 인수
    exit 1
fi

num=$1
if [ $num == 0 ]
then
    echo 1      #팩토리얼 0 -> 1이다.
else
    factorial $num
fi
