`timescale 1ns/1ps

module tb_pc;

  reg clk;
  reg reset;
  reg [31:0] pc_next;
  wire [31:0] pc_current;

  pc dut (
    .clk(clk),
    .reset(reset),
    .pc_next(pc_next),
    .pc_current(pc_current)
  );

  always #5 clk = ~clk;  
 
  initial begin
   $dumpfile("pc.vcd");
   $dumpvars(0, tb_pc);

    clk = 0;
    reset = 1;
    pc_next = 32'd0;

    #10;
    reset = 0;

    pc_next = 32'd4;   #10;
    pc_next = 32'd8;   #10;
    pc_next = 32'd12;  #10;
    pc_next = 32'd16;  #10;
    pc_next = 32'd20;  #10;

    #10;
    $finish;
  end

endmodule
