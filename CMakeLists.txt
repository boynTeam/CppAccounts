cmake_minimum_required(VERSION 3.17)
project(CppAccounts)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppAccounts main.cpp Account.h Account.cpp AccountInfo.cpp AccountInfo.h Runner.cpp Runner.h)