// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFULLADDER4_TB__SYMS_H_
#define VERILATED_VFULLADDER4_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfulladder4_tb.h"

// INCLUDE MODULE CLASSES
#include "Vfulladder4_tb___024root.h"
#include "Vfulladder4_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfulladder4_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfulladder4_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfulladder4_tb___024root       TOP;
    Vfulladder4_tb___024unit       TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_fulladder4_tb;

    // CONSTRUCTORS
    Vfulladder4_tb__Syms(VerilatedContext* contextp, const char* namep, Vfulladder4_tb* modelp);
    ~Vfulladder4_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
