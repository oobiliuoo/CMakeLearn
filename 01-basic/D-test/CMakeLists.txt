cmake_minimum_required(VERSION 3.5)

project(ctest)

set(INC_PATH E:\\CodeSpace\\MyCode2023\\CMakeLearn\\01-basic\\D-shared-library\\include)
set(LIB_PATH E:\\CodeSpace\\MyCode2023\\CMakeLearn\\01-basic\\D-shared-library\\build\\Debug)

include_directories(${INC_PATH})
link_directories(${LIB_PATH})

add_library(hello_shared SHARED IMPORTED)
set_target_properties(hello_shared PROPERTIES IMPORTED_IMPLIB ${LIB_PATH}/hello_shared.lib)

add_executable(ctest main.cpp)

target_link_libraries(ctest hello_shared)

