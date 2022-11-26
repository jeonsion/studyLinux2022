#! /bin./bash
# 사용법 :./reply.bash
# 계속 여부를 입력받아 프린트한다.

#중요
echo -n "계속 하겠습니까? "
read reply
if [ "$reply" == "y" ]||[ "$reply" == "" ]      #여기가 부분 중요 (y/n)을 물어볼 때 Enter눌러도 yes로 입력
then
    echo yes
elif [ $reply == "n" ]
then
    echo no
fi
