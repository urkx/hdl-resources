`timescale 1ns/1ps

// 2 4-bit fulladder connection
module fulladder8 (
    input [7:0] a,
    input [7:0] b,
    input cin,
    output [7:0] s,
    output cout8
);
    wire cout1;
    fulladder4 fa0(.a(a[3:0]), .b(b[3:0]), .cin(cin), .s(s[3:0]), .cout4(cout1));
    fulladder4 fa1(.a(a[7:4]), .b(b[7:4]), .cin(cout1), .s(s[7:4]), .cout4(cout8));
endmodule
