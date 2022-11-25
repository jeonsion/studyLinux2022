cmake_minimum_required(VERSION 3.0.2)
project(LinuxProg)
find_package(Threads)       #지원을 추가 , 없어도됨 (다른라이브러리 파일을 추가할 때 사용한다.)
set(CMAKE_BUILD_TYPE Release)   #빌드유형 지정. 여기서는 Release 모드



#헤더파일을 찾을 디렉터리 추가
include_directories(bus display gpio motor network sensor)  #헤더파일을 어디서 찾을 지 디렉터리 나열
file(GLOB_RECURSE SOURCES "./*.cpp")

add_library(LinuxProg SHARED ${SOURCES})
target_link_libraries(LinuxProg ${CMAKE_THREAD_LIBS_INIT})
install (TARGETS LinuxProg DESTINATION /usr/lib)