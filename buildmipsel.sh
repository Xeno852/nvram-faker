#!/bin/sh

export ARCH=mipsel
TARGET=$1
# Change the below to your personal toolchain directory
TOOLCHAIN_DIR="/usr/mipsel-linux-gnu"

warn()
{
	echo "$1" >&2
}

if [ ! -d "$TOOLCHAIN_DIR" ]; then
    warn "Toolchain directory $TOOLCHAIN_DIR not found."
    exit 1
fi

TOOLCHAIN_BIN_DIR="$TOOLCHAIN_DIR/bin"

if [ ! -d "$TOOLCHAIN_BIN_DIR" ]; then
    warn "Toolchain bin directory $TOOLCHAIN_BIN_DIR not found."
    exit 1
fi

export PATH="$TOOLCHAIN_BIN_DIR:$PATH"

export CC="gcc"

export LD="ld"

export AR="ar"

export STRIP="strip"

export NM="nm"

make $TARGET || exit $?
