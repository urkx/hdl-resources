`timescale 1ns/1ps

module fulladder8_tb ();
    reg [7:0] a;
    reg [7:0] b;
    wire cin = 0;

    wire [7:0] s;
    wire cout;

    fulladder8 uut(.a(a), .b(b), .cin(cin), .s(s), .cout8(cout));

    initial begin
        $dumpfile("waves.vcd");
	    $dumpvars(0, fulladder8_tb);
    	$monitor("%b + %b = %b; Carry = %b", a, b, s, cout);
        a = 8'b00000001;
        b = 8'b00000001;
        #2000
        a = 8'b00000011;
        b = 8'b00000001;
        #2000
        a = 8'b00000001;
        b = 8'b00000111;
	    #2000
	    a = 8'b10000000;
	    b = 8'b01111111;
	    #2000
	    a = 8'b10000000;
	    b = 8'b11111111;
	    #500 $finish;
    end
endmodule

