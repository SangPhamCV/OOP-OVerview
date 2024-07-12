cmake_minimum_required(VERSION 3.10)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Section3)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(UTILS_DIR ${CMAKE_SOURCE_DIR}/include/utils)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

include_directories(include)
include_directories(${INCLUDE_DIR})

set(SOURCES
    ${SOURCE_DIR}/main.cpp
    ${UTILS_DIR}/Company.cpp
    ${UTILS_DIR}/Employee.cpp
    ${UTILS_DIR}/ManagerEmployee.cpp
    ${UTILS_DIR}/ProductionEmployee.cpp
    ${UTILS_DIR}/OfficeEmployee.cpp
)

add_executable(Section3 ${SOURCES})

