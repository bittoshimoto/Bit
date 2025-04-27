
Debian
====================
This directory contains files used to package bitd/bit-qt
for Debian-based Linux systems. If you compile bitd/bit-qt yourself, there are some useful files here.

## bit: URI support ##


bit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bit-qt binary to `/usr/bin`
and the `../../share/pixmaps/bit128.png` to `/usr/share/pixmaps`

bit-qt.protocol (KDE)

