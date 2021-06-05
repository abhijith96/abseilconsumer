cmake_minimum_required(VERSION 3.19)
project(abseilconsumer)
set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(KEEP_RPATHS)

add_executable(program_with_linker_error sample_program_giving_linker_error.cpp)
target_link_libraries(program_with_linker_error ${CONAN_LIBS})

add_executable(working_program sample_program_which_works.cpp)
target_link_libraries(working_program ${CONAN_LIBS})