#! /bin/bash
# 사용법 : ./invite.bash
# 저녁 초대 메일을 보낸다.

#for문을 사용하여 보자

invitee=(lee kim choi)  #리스트 형태로 받기
for person in ${invitee[*]}
do
    echo "초대의 글 : 오늘 저녁 시갓 모임에 초대합니다. $person@gmail.com"
done
