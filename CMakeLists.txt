cmake_minimum_required(VERSION 2.6)
project(lab3)

add_executable(lab3 main.cpp)
target_sources(lab3 PUBLIC Func_S.cpp)
target_sources(lab3 PUBLIC Func_xi.cpp)
target_sources(lab3 PUBLIC Func_yi.cpp)

install(TARGETS lab3 RUNTIME DESTINATION bin)
