cmake_minimum_required(VERSION 3.5)

project(ctest)

set (INC_PATH E:\\CodeSpace\\MyCode2023\\CMakeLearn\\01-basic\\C-statuc-library\\include)
set (LIB_PATH E:\\CodeSpace\\MyCode2023\\CMakeLearn\\01-basic\\C-statuc-library\\build\\Debug)

include_directories(${INC_PATH})
link_directories(${LIB_PATH})

add_library(hello_lib STATIC IMPORTED)
set_target_properties(hello_lib PROPERTIES IMPORTED_LOCATION ${LIB_PATH}/hello_lib.lib)

add_executable(ctest main.cpp)

target_link_libraries(ctest hello_lib)


