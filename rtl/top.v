`timescale 1ns/1ps
module top (
    input wire clk,
    input wire reset,
    output wire [31:0] instr // Чтобы видеть в Wavetrace, что мы читаем
);

    wire [31:0] pc_current;
    wire [31:0] pc_next;

    // Логика вычисления следующего адреса: просто PC + 4
    assign pc_next = pc_current + 4;

    // Подключаем твой PC
    pc my_pc (
        .clk(clk),
        .reset(reset),
        .pc_next(pc_next),
        .pc_current(pc_current)
    );

    // Подключаем твою память инструкций
    imem my_imem (
        .pc_current(pc_current),
        .instr(instr)
    );

endmodule