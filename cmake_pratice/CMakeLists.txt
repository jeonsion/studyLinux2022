#상위폴더
cmake_minimum_required(VERSION 3.0.2)
project(Mymain)
set(PROJECT_LINK_LIBS libReverseCopy.so)
link_directories(/home/jeonsion/Desktop/opensw2022/cmake_pratice/lib_build)
include_directories(/home/jeonsion/Desktop/opensw2022/cmake_pratice)
add_executable(main_for_a main.c)
target_link_libraries(main_for_a ${PROJECT_LINK_LIBS})