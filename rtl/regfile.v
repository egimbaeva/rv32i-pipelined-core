`timescale 1ns/1ps

module regfile (
    input  wire        clk,
    input  wire        we,        // write enable
    input  wire [4:0]  rs1,       // read address 1
    input  wire [4:0]  rs2,       // read address 2
    input  wire [4:0]  rd,        // write address
    input  wire [31:0] wd,        // write data
    output wire [31:0] rd1,       // read data 1
    output wire [31:0] rd2        // read data 2
);

    reg [31:0] regs [0:31];

    // Read ports (combinational)
    assign rd1 = (rs1 == 0) ? 32'b0 : regs[rs1];
    assign rd2 = (rs2 == 0) ? 32'b0 : regs[rs2];

    // Write port (sequential)
    always @(posedge clk) begin
        if (we && (rd != 0)) begin
            regs[rd] <= wd;
        end
    end

endmodule