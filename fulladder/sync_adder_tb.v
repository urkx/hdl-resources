`timescale 1ns/1ps

module sync_adder_tb ();

    reg clk = 0;
    reg [7:0] a;
    reg [7:0] b;
    reg cin = 0;

    wire [7:0] s;
    wire cout;

    sync_adder uut(
        .clk(clk),
        .a(a),
        .b(b),
        .cin(cin),
        .s(s),
        .cout(cout)
    );

    always begin
        #50 clk = ~clk;
    end

    initial begin
        $dumpfile("waves.vcd");
        $dumpvars(0, sync_adder_tb);
    	$monitor("At time %t: %b + %b = %b; Carry = %b", $time, a, b, s, cout);
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