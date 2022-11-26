#! /bin/bash

echo 명령줄 인수의 개수 : $#

add=`expr $1 + $2`
sub=`expr $1 - $2`
mul=`expr $1 \* $2`
div=`expr $1 / $2`

echo "$1 + $2 = $add"
echo "$1 - $2 = $sub"
echo "$1 * $2 = $mul"
echo "$1 / $2 = $div"