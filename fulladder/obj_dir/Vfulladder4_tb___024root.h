// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfulladder4_tb.h for the primary calling header

#ifndef VERILATED_VFULLADDER4_TB___024ROOT_H_
#define VERILATED_VFULLADDER4_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vfulladder4_tb___024unit;


class Vfulladder4_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfulladder4_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfulladder4_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ fulladder4_tb__DOT__a;
    CData/*3:0*/ fulladder4_tb__DOT__b;
    CData/*0:0*/ fulladder4_tb__DOT__cin;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfulladder4_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfulladder4_tb___024root(Vfulladder4_tb__Syms* symsp, const char* v__name);
    ~Vfulladder4_tb___024root();
    VL_UNCOPYABLE(Vfulladder4_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
