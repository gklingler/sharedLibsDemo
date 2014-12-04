#!/bin/bash

## uncomment next two lines to build with clang
#export CC=/usr/bin/clang
#export CXX=/usr/bin/clang++

BUILD_DIR=build-linux
mkdir -p ${BUILD_DIR}
cd ${BUILD_DIR}
cmake -G "Unix Makefiles" ../
make

cd -