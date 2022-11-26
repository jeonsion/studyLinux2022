#! /bin/bash
# 사용법 :./factorial.bash
# 매개변수를 입력받아 해당 값의 팩토리얼 연산을 수행하여 결과를 출력한다.
# 스크립트 자체를 재귀호출에서 사용하므로 결과값과 연산횟수를 인수로 넘겨주기

if [ $# -ne 3 ]
then
    echo 사용법 : $0 인수, 1 1
    exit 1
fi 

num=$1
try=$2
result=$3
if [ $try -gt $num ]   #반복회수가 입력받은 num보다 크면안됨
then
    echo "결과값 : $result"
else
    result=`expr $result \* $try`   
    try=`expr $try + 1`
    echo $num $try $result
    /home/jeonsion/Desktop/opensw2022/Bash_file/factorial.bash $num $try $result
fi