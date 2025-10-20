// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfulladder4_tb.h for the primary calling header

#ifndef VERILATED_VFULLADDER4_TB___024UNIT_H_
#define VERILATED_VFULLADDER4_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfulladder4_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfulladder4_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vfulladder4_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfulladder4_tb___024unit(Vfulladder4_tb__Syms* symsp, const char* v__name);
    ~Vfulladder4_tb___024unit();
    VL_UNCOPYABLE(Vfulladder4_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
