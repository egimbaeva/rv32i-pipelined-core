 all:
 verilator -Irtl --cc rtl/top.v --exe sim_main.cpp --trace
 make -j -C obj_dir -f Vtop.mk
 ./obj_dir/Vtop

 clean:
 rm -rf obj_dir waveform.vcd