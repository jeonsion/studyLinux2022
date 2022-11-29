cmake_minimum_required(VERSION 3.0.2)
project(reverse)    #프로젝트 이름 임의로 선언
find_package(Threads)   #pthread 지원을 추가
set(CMAKE_BUILD_TYPE Release)   #빌드유형 지정. Debug도 가능
include_directories(bus display gpio etc)   #헤더파일을 찾을 디렉터리 추가
file(GLOB_RECURSE SOURCES "./*.c")  #SOURCES S붙타 확인하기!!

#SHARED는 공유라이브러리*.so STATIC는 정적라이브러리 *.a생성
#생성파일 이름 기반은 ReverseCopy
add_library(ReverseCopy STATIC ${SOURCES})  
target_link_libraries(ReverseCopy ${CMAKE_THREAD_LIBS_INIT})
install (TARGETS ReverseCopy DESTINATION /usr/lib)

