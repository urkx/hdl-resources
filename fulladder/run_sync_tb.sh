iverilog -o sync_adder_tb \
    sync_adder_tb.v \
    sync_adder.v \
    fulladder8.v \
    fulladder4.v \
    fulladder.v \
&& vvp sync_adder_tb