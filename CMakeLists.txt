# This file is part of 'bitchat.desktop' 
# Copyright (c) 2025, Red Panda Software LLC, Pedro Vicente. All rights reserved.
# http://www.thesunroom.org/
# See file LICENSE for full license details.

cmake_minimum_required(VERSION 3.10)
project(bitchat)
set(CMAKE_CXX_STANDARD 17)

#//////////////////////////
# list of source files 
#//////////////////////////

set(src ${src})
set(src ${src} src/main.cc)
set(src ${src} src/bitchat.hh)
set(src ${src} src/bitchat.cc)
set(src ${src} src/log.hh)
set(src ${src} src/log.cc)

add_executable(bitchat ${src})

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT bitchat)

