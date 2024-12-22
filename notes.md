# Verilog - Basics

Taken from [US DTE department](https://www.dte.us.es/Members/paulino/Verilog-Intro.pdf)

## Types of description

### Functional

Consists on continuos output assignments using ```assign```.
All ```assign``` instructions executes concurrently.

```verilog
module votador(input a,b,c, output z); 
    assign z = a&b | a&c | b&c;
endmodule
```
### Procedural. 

Based on ```always``` keyword use, it allows the use of control structures.
This is an algorithmic description, as is the software, and facilitates the creation of complex functions.

```verilog
module votador( input a,b,c, output reg z)
    always @(a,b,c) 
        if(a==1)
            if(b==1 || c==1)
                z=1;
            else z=0;
        else
        if(b==1 && c==1)
            z=1; 
        else
            z=0;
endmodule
```
### Structural

Useful for connect previously defined modules.
Basic logic gates are predefined in Verilog.

```verilog
module votador( input a,b,c, output z)
    wire out1,out2,out3;
    and and1(out1,a,b);
    and and2(out2,b,c);
    and and3(out3,a,c);
    or or1(z,out1,out2,out3);
endmodule
```

## Types of signals

### wire

Physical wires that connects components, so has no memory.

### reg (variables)

Used to store values, so has memory.

All assignments done in a procedure must be reg signals.

## I/O ports

In module declarations, ports may be specified as wire or reg type.

If no specification, ports are type wire by default.
Wire are used in ```assign``` sentences, while reg are assigned in procedures.

```verilog
module foo (
    input wire x,
    input z, 
    output reg mem
);
endmodule
```