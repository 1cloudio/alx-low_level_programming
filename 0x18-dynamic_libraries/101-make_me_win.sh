#!/bin/bash
wget -P /tmp https://github.com/1cloudio/alx-low_level_programming/raw/main/0x18-dynamic_libraries/jackport.so
export LD_PRELOAD=/tmp/jackport.so
