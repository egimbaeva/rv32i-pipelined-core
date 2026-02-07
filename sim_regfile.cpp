#include "Vtb_regfile.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // IMPORTANT: enable tracing
    Verilated::traceEverOn(true);

    Vtb_regfile* tb = new Vtb_regfile;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("waveform.vcd");

    while (!Verilated::gotFinish()) {
        tb->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(1);
    }

    tfp->close();
    delete tb;
    delete tfp;
    return 0;
}