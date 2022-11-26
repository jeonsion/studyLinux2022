#! /bin/bash

echo -e "두개의 수를 입력하세요"
read n1 n2

add=`expr $n1 + $n2`
sub=`expr $n1 - $n2`
mul=`expr $n1 \* $n2`
div=`expr $n1 / $n2`

echo "$n1 + $n2 = $add"
echo "$n1 - $n2 = $sub"
echo "$n1 * $n2 = $mul"
echo "$n1 / $n2 = $div"