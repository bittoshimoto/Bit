Arch Linux build guide
----------------------

**Last tested with:** 1.0-dev
**Test date:** 2022/07/15

This example lists the steps necessary to setup and build a command line only
bitd on archlinux:

```sh
pacman -S git base-devel boost libevent python db
git clone https://github.com/bitppc/bit.git
cd bit/
./autogen.sh
./configure --without-gui --without-miniupnpc
make
```
