// 4 1-bit fulladder connection
module fulladder4 (
    input [3:0] a,
    input [3:0] b,
    input cin,
    output [3:0] s,
    output cout4
);
    wire cout1, cout2, cout3;

    fulladder fa0(.a(a[0]), .b(b[0]), .cin(cin), .s(s[0]), .cout(cout1));
    fulladder fa1(.a(a[1]), .b(b[1]), .cin(cout1), .s(s[1]), .cout(cout2));
    fulladder fa2(.a(a[2]), .b(b[2]), .cin(cout2), .s(s[2]), .cout(cout3));
    fulladder fa3(.a(a[3]), .b(b[3]), .cin(cout3), .s(s[3]), .cout(cout4));
endmodule