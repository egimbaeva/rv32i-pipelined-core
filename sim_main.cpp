#include "Vtop.h"            // Теперь мы тестируем модуль TOP
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;    // Создаем наш процессор

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    int time = 0;
    top->reset = 1;          // Сначала держим сброс
    top->clk = 0;

    for (int i = 0; i < 20; i++) { // 10 тактов (20 полутактов)
        if (i > 2) top->reset = 0; // На втором такте отпускаем reset
        
        top->clk = !top->clk;      // Переключаем такт (0 -> 1 -> 0)
        top->eval();
        
        tfp->dump(time);           // Записываем состояние
        time += 10;                // Двигаем время вперед!
    }

    tfp->close();
    delete top;
    return 0;
}