// This file is part of 'bitchat.desktop' 
// Copyright (c) 2025, Red Panda Software LLC, Pedro Vicente. All rights reserved.
// http://www.thesunroom.org/
// See file LICENSE for full license details.

#include "log.hh"
#include "bitchat.hh"

/////////////////////////////////////////////////////////////////////////////////////////////////////
// usage
/////////////////////////////////////////////////////////////////////////////////////////////////////

void usage()
{
  std::cout << "bitchat commands:\n";
  std::cout << "/connect <host> <port> - connect to another peer\n";
  std::cout << "/j #channel - join or create a channel\n";
  std::cout << "/m @name message - send private message\n";
  std::cout << "/w - see who's online\n";
  std::cout << "/channels - show all discovered channels\n";
  std::cout << "/clear - clear chat messages\n";
  std::cout << "/hug @name - send a hug\n";
  std::cout << "/slap @name - slap someone with a trout\n";
  std::cout << "/block @name - block a peer\n";
  std::cout << "/block - list all blocked peers\n";
  std::cout << "/unblock @name - unblock a peer\n";
  std::cout << "/fav @name - add to favorites\n";
  std::cout << "/unfav @name - remove from favorites\n";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
// main
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
  open_log();
  std::string line;
  while (true)
  {
    if (std::getline(std::cin, line))
    {
      handle_command(line);
    }
  }
  return 0;
}

