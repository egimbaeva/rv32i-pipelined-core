#!/bin/bash
set -e 

echo "Running Verilator lint check..."

verilator --lint-only \
 -Wall
 ../rtl/*.v \
 ../tb/*.v

echo "Rtl compiles without errors"
