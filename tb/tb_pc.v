`timescale 1ns/1ps

module tb_pc;

  // 1️⃣ Сигналы (провода и регистры)
  reg clk;
  reg reset;
  reg [31:0] pc_next;
  wire [31:0] pc;

  // 2️⃣ Подключаем твой PC модуль
  pc dut (
    .clk(clk),
    .reset(reset),
    .pc_next(pc_next),
    .pc(pc)
  );

  // 3️⃣ Генератор тактового сигнала
  always #5 clk = ~clk;  // период = 10ns

  // 4️⃣ Основной тест
  initial begin
    // начальные значения
    clk = 0;
    reset = 1;
    pc_next = 32'd0;

    // подержим reset
    #10;
    reset = 0;

    // 5 тактов — меняем pc_next
    pc_next = 32'd4;   #10;
    pc_next = 32'd8;   #10;
    pc_next = 32'd12;  #10;
    pc_next = 32'd16;  #10;
    pc_next = 32'd20;  #10;

    #10;
    $finish;
  end

endmodule
