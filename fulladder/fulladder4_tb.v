`timescale 1ns/1ps

module fulladder4_tb ();
    reg [3:0] a;
    reg [3:0] b;
    wire cin;

    wire [3:0] s;
    wire cout;

    fulladder4 uut(.a(a), .b(b), .cin(cin), .s(s), .cout4(cout));

    initial begin
        $monitor("%b + %b = %b", a, b, s);
        a = 4'b0001;
        b = 4'b0001;
        #20
        a = 4'b0011;
        b = 4'b0001;
        #20
        a = 4'b0011;
        b = 4'b0111;
    end
endmodule