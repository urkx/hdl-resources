`timescale 1ns/1ps

module sync_adder (
    input clk,
    input [7:0] a,
    input [7:0] b,
    input cin,
    output [7:0] s,
    output cout
);

    reg [7:0] a_reg;
    reg [7:0] b_reg;

    fulladder8 fa(
        .a(a_reg),
        .b(b_reg),
        .cin(cin),
        .s(s),
        .cout8(cout)
    );

    always @(posedge clk) begin
        a_reg <= a;
        b_reg <= b;
    end


endmodule