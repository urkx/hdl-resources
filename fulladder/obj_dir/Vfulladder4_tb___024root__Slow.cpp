// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfulladder4_tb.h for the primary calling header

#include "Vfulladder4_tb__pch.h"
#include "Vfulladder4_tb__Syms.h"
#include "Vfulladder4_tb___024root.h"

void Vfulladder4_tb___024root___ctor_var_reset(Vfulladder4_tb___024root* vlSelf);

Vfulladder4_tb___024root::Vfulladder4_tb___024root(Vfulladder4_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfulladder4_tb___024root___ctor_var_reset(this);
}

void Vfulladder4_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfulladder4_tb___024root::~Vfulladder4_tb___024root() {
}
