#하위폴더 안에 있음

cmake_minimum_required(VERSION 3.0.2)
project(reverse)
find_package(Threads)
set(CMAKE_BUILD_TYPE Release)
include_directories(bus display)
file(GLOB_RECURSE SOURCES "./*c")

#여기서부터 진짜
add_library(ReverseCopy SHARED ${SOURCES})
#add_library(ReverseCopy STATIC ${SOURCES})

target_link_libraries(ReverseCopy ${CMAKE_THREAD_LIBS_INIT})
#여기까지만 해줘도 됨 
#근데 install 해보자
install (TARGETS ReverseCopy DESTINATION /usr/lib)

