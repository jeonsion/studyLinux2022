#! /bin/bash
# 사용법 : ./fatorial_ver2.bash 인수
# while 통한 팩토리얼 계산

i=1
res=1

if [ $# -ne 1 ]
then
    echo : 사용법 $0 인수
    exit 1
fi

while [ $i -le $1 ]             #$1보다 i 값이 작으면 실행
do
    res=`expr $res \* $i`
    i=`expr $i + 1`
    echo $i $res
done
echo $res