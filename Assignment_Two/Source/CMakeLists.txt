cmake_minimum_required(VERSION 3.10)
project(Source)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Source source.cpp)
add_subdirectory(String_File)
target_link_libraries(Source PUBLIC String_File)
target_include_directories(Source PUBLIC "${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/String_File"
)
