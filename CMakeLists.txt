cmake_minimum_required(VERSION 3.1)
project(PokerSolver)

set(TARGET_NAME "pokersolver")
project(${TARGET_NAME})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/build)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.c" "src/*.h" "${CMAKE_SOURCE_DIR}/thirdparty/omp/*.cpp" "${CMAKE_SOURCE_DIR}/thirdparty/omp/*.c" "${CMAKE_SOURCE_DIR}/thirdparty/omp/*.h")

add_executable(${TARGET_NAME} ${SOURCES})

target_link_libraries(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/phevaluator/libpheval.a)

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty)
