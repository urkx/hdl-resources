// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfulladder4_tb__pch.h"

//============================================================
// Constructors

Vfulladder4_tb::Vfulladder4_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfulladder4_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfulladder4_tb::Vfulladder4_tb(const char* _vcname__)
    : Vfulladder4_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfulladder4_tb::~Vfulladder4_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfulladder4_tb___024root___eval_debug_assertions(Vfulladder4_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfulladder4_tb___024root___eval_static(Vfulladder4_tb___024root* vlSelf);
void Vfulladder4_tb___024root___eval_initial(Vfulladder4_tb___024root* vlSelf);
void Vfulladder4_tb___024root___eval_settle(Vfulladder4_tb___024root* vlSelf);
void Vfulladder4_tb___024root___eval(Vfulladder4_tb___024root* vlSelf);

void Vfulladder4_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfulladder4_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfulladder4_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfulladder4_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfulladder4_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfulladder4_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfulladder4_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfulladder4_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfulladder4_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfulladder4_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfulladder4_tb___024root___eval_final(Vfulladder4_tb___024root* vlSelf);

VL_ATTR_COLD void Vfulladder4_tb::final() {
    Vfulladder4_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfulladder4_tb::hierName() const { return vlSymsp->name(); }
const char* Vfulladder4_tb::modelName() const { return "Vfulladder4_tb"; }
unsigned Vfulladder4_tb::threads() const { return 1; }
void Vfulladder4_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfulladder4_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vfulladder4_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfulladder4_tb::trace()' called on model that was Verilated without --trace option");
}
