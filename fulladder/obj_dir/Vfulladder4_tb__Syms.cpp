// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfulladder4_tb__pch.h"
#include "Vfulladder4_tb.h"
#include "Vfulladder4_tb___024root.h"
#include "Vfulladder4_tb___024unit.h"

// FUNCTIONS
Vfulladder4_tb__Syms::~Vfulladder4_tb__Syms()
{
}

Vfulladder4_tb__Syms::Vfulladder4_tb__Syms(VerilatedContext* contextp, const char* namep, Vfulladder4_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_fulladder4_tb.configure(this, name(), "fulladder4_tb", "fulladder4_tb", -9, VerilatedScope::SCOPE_OTHER);
}
