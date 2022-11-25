cmake_minimum_required(VERSION 3.0.2)
project (TestLibrary)
set( PROJECT_LINK_LIBS libLinuxProg.so )

link_directories(~/Desktop/opensw2022/library_test/lib_build)
include_directories(~/Desktop/opensw2022/library_test)
add_executable(libtest test.cpp)
target_link_libraries(libtest ${PORJECT_LINK_LIBS} )

