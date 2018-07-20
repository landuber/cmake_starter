cmake_minimum_required(VERSION 3.5)
project(starter VERSION 1.0.0 LANGUAGES CXX)

find_package(gflags REQUIRED) 
find_package(glog REQUIRED)

add_executable(flagtest src/flag_test.cpp)

target_include_directories(flagtest
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        $<CMAKE_CURRENT_SOURCE_DIR}/src
)


target_compile_options(flagtest PRIVATE $<$<CXX_COMPILER_ID:GNU>:-Wall>)
target_compile_options(flagtest PRIVATE -std=c++17)
target_compile_options(flagtest PRIVATE -fconcepts)

target_link_libraries(flagtest
    PUBLIC
        gflags
        glog
)
