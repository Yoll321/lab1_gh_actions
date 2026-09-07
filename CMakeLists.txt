cmake_minimum_required(VERSION 3.10)

set(PATCH_VERSION "1" CACHE STRING "Patch Version")

project(hello-world
    VERSION 1.0.${PATCH_VERSION}
    LANGUAGES CXX
)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version.h
)

add_executable(hello-world main.cpp)

target_include_directories(hello-world PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)

set_target_properties(hello-world PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
