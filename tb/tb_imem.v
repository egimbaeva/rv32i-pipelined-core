module tb_imem;

    reg  [31:0] pc;
    wire [31:0] instr;

    imem dut (
        .pc(pc),
        .instr(instr)
    );

    initial begin
        pc = 0;
        #10 pc = 4;
        #10 pc = 8;
        #10 pc = 12;
        #10 $finish;
    end

endmodule