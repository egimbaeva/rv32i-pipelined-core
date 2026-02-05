module pc (
  input wire clk,
  input wire reset,
  input wire [31:0] pc_next,
  output wire [31:0] pc_current
);
  always @(posedge clk) begin
    if (reset)
      pc_current <= 32'b0;
    else 
      pc_current <= pc_next;
  end
endmodule
