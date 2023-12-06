cmake_minimum_required(VERSION 3.21)

project(CppStaticInitializationSandbox)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

add_subdirectory(libA)

add_executable(main main.cpp)
target_link_libraries(main libA)
