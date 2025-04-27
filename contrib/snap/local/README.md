# Bit Snap Packaging

Commands for building and uploading a Bit Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official Bit binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register bit-core
snapcraft upload \*.snap
sudo snap install bit-core
```

### Usage
```
bit-unofficial.cli # for bit-cli
bit-unofficial.d # for bitd
bit-unofficial.qt # for bit-qt
bit-unofficial.test # for test_bit
bit-unofficial.tx # for bit-tx
```

### Uninstalling
```
sudo snap remove bit-unofficial
```