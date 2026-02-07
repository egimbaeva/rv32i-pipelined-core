module imem (
    input  wire [31:0] pc,
    output wire [31:0] instr
);

    reg [31:0] mem [0:15]; // 16 инструкций 

    // combinational read
    assign instr = mem[pc[31:2]];

    initial begin
        mem[0] = 32'h00000013; // nop (addi x0, x0, 0)
        mem[1] = 32'h00100093; // addi x1, x0, 1
        mem[2] = 32'h00200113; // addi x2, x0, 2
        mem[3] = 32'h00308193; // addi x3, x1, 3
    end

endmodule