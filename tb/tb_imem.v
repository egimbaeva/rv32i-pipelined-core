module tb_imem;

    reg  [31:0] pc;
    wire [31:0] instr;

    imem dut (
        .pc_current(pc),
        .instr(instr)
    );

    integer i;

    initial begin
        pc = 0;

        // двигаем PC по словам
        for (i = 0; i < 4; i = i + 1) begin
            #10 pc = pc + 4;
        end

        #10 $finish;
    end

endmodule