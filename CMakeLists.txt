cmake_minimum_required(VERSION 3.10)
project(bitchat)
set(CMAKE_CXX_STANDARD 17)

add_executable(bitchat src/main.cc)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT bitchat)

