# bitchat.desktop
bitchat network running on desktop (Windows, Mac, Linux) 

bitchat is a decentralized peer-to-peer messaging app that works over Bluetooth mesh networks

https://github.com/permissionlesstech/bitchat

bitchat.desktop works exclusively on desktop computers. Supported operating systems:

- Windows
- Linux 
- Mac OS
- Raspberry OS

## Usage

### Basic Commands

- `/j #channel` - Join or create a channel
- `/m @name message` - Send a private message
- `/w` - List online users
- `/channels` - Show all discovered channels
- `/block @name` - Block a peer from messaging you
- `/block` - List all blocked peers
- `/unblock @name` - Unblock a peer
- `/clear` - Clear chat messages

## Building

CMake is used. On a bash shell, do

```cmd
./build.cmake.sh
```