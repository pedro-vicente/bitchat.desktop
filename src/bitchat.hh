// This file is part of 'bitchat.desktop' 
// Copyright (c) 2025, Red Panda Software LLC, Pedro Vicente. All rights reserved.
// http://www.thesunroom.org/
// See file LICENSE for full license details.

#ifndef BITCHAT_HH
#define BITCHAT_HH

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

/////////////////////////////////////////////////////////////////////////////////////////////////////
// function declarations
/////////////////////////////////////////////////////////////////////////////////////////////////////

void handle_command(const std::string& command);
std::vector<std::string> split(const std::string& str, char delimiter);
std::string remove_at_prefix(const std::string& nickname);


#endif