`timescale 1ns/1ps

// 1-bit Fulladder
module fulladder (
    input a, b, cin,
    output s, cout
);
    assign s = a ^ b ^ cin;
    assign cout = a & b | a & cin | b & cin;
endmodule

