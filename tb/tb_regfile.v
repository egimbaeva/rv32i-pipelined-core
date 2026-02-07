`timescale 1ns/1ps

module tb_regfile;

    reg clk;
    reg we;
    reg [4:0] rs1;
    reg [4:0] rs2;
    reg [4:0] rd;
    reg [31:0] wd;

    wire [31:0] rd1;
    wire [31:0] rd2;

    regfile uut (
        .clk(clk),
        .we(we),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wd(wd),
        .rd1(rd1),
        .rd2(rd2)
    );

    // clock
    always #5 clk = ~clk;

    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb_regfile);

        $display("==== REGFILE TEST START ====");

        clk = 0;
        we  = 0;
        rs1 = 0;
        rs2 = 0;
        rd  = 0;
        wd  = 0;

        #10;

        // write x1 = 5
        we = 1;
        rd = 5'd1;
        wd = 32'd5;

        #10;  // wait posedge clk

        we = 0;

        // read x1
        rs1 = 5'd1;
        #1;

        if (rd1 != 32'd5) begin
            $display("FAIL: expected x1=5, got %0d", rd1);
            $finish;
        end
        else begin
            $display("PASS: x1 = %0d", rd1);
        end

        // try writing x0 = 123
        we = 1;
        rd = 5'd0;
        wd = 32'd123;

        #10;

        we = 0;

        // read x0
        rs1 = 5'd0;
        #1;

        if (rd1 != 32'd0) begin
            $display("FAIL: expected x0=0, got %0d", rd1);
            $finish;
        end
        else begin
            $display("PASS: x0 stays 0");
        end

        $display("==== REGFILE TEST PASSED ====");
        $finish;
    end

endmodule