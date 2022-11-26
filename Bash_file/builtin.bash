#! /bin/bash    ->해당파일을 bash쉘로 실행시키겠다는 의미
# builtin.bash
# 사전정의 지역변수 17p 참고

echo 이 스크립트 이름: $0
echo 첫 번째 명령줄 인수: $1
echo 모든 명렬줄 인수 : $*
echo 이 스크립트를 실행하는 프로세스 번호: $$
echo 명령줄 인수의 개수 : $#

# $ chmod 55 builtin.bash
# $ bash builtin.bash 로 실행해야 되네..