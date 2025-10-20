// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfulladder4_tb.h for the primary calling header

#include "Vfulladder4_tb__pch.h"
#include "Vfulladder4_tb__Syms.h"
#include "Vfulladder4_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfulladder4_tb___024root___eval_initial__TOP__Vtiming__0(Vfulladder4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder4_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->fulladder4_tb__DOT__a = 1U;
    vlSelf->fulladder4_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x1e8480ULL, 
                                       nullptr, "fulladder4_tb.v", 
                                       17);
    vlSelf->fulladder4_tb__DOT__a = 3U;
    vlSelf->fulladder4_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x1e8480ULL, 
                                       nullptr, "fulladder4_tb.v", 
                                       20);
    vlSelf->fulladder4_tb__DOT__a = 3U;
    vlSelf->fulladder4_tb__DOT__b = 7U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfulladder4_tb___024root___dump_triggers__act(Vfulladder4_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfulladder4_tb___024root___eval_triggers__act(Vfulladder4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder4_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfulladder4_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfulladder4_tb___024root___act_sequent__TOP__0(Vfulladder4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder4_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ fulladder4_tb__DOT__uut__DOT__cout1;
    fulladder4_tb__DOT__uut__DOT__cout1 = 0;
    CData/*0:0*/ fulladder4_tb__DOT__uut__DOT__cout2;
    fulladder4_tb__DOT__uut__DOT__cout2 = 0;
    // Body
    fulladder4_tb__DOT__uut__DOT__cout1 = (1U & (((IData)(vlSelf->fulladder4_tb__DOT__a) 
                                                  & ((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                     | (IData)(vlSelf->fulladder4_tb__DOT__cin))) 
                                                 | ((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                    & (IData)(vlSelf->fulladder4_tb__DOT__cin))));
    fulladder4_tb__DOT__uut__DOT__cout2 = (1U & ((((IData)(vlSelf->fulladder4_tb__DOT__a) 
                                                   >> 1U) 
                                                  & (((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                      >> 1U) 
                                                     | (IData)(fulladder4_tb__DOT__uut__DOT__cout1))) 
                                                 | (((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                     >> 1U) 
                                                    & (IData)(fulladder4_tb__DOT__uut__DOT__cout1))));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%b + %b = %b\n",4,vlSelf->fulladder4_tb__DOT__a,
                  4,(IData)(vlSelf->fulladder4_tb__DOT__b),
                  4,((8U & ((0xfffffff8U & (IData)(vlSelf->fulladder4_tb__DOT__a)) 
                            ^ ((0xfffffff8U & (IData)(vlSelf->fulladder4_tb__DOT__b)) 
                               ^ (0xfffffff8U & ((((IData)(vlSelf->fulladder4_tb__DOT__a) 
                                                   << 1U) 
                                                  & ((0xfffffff8U 
                                                      & ((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                         << 1U)) 
                                                     | ((IData)(fulladder4_tb__DOT__uut__DOT__cout2) 
                                                        << 3U))) 
                                                 | (((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                     << 1U) 
                                                    & ((IData)(fulladder4_tb__DOT__uut__DOT__cout2) 
                                                       << 3U))))))) 
                     | ((4U & ((0xfffffffcU & (IData)(vlSelf->fulladder4_tb__DOT__a)) 
                               ^ ((0xfffffffcU & (IData)(vlSelf->fulladder4_tb__DOT__b)) 
                                  ^ ((IData)(fulladder4_tb__DOT__uut__DOT__cout2) 
                                     << 2U)))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->fulladder4_tb__DOT__a)) 
                                                      ^ 
                                                      ((0xfffffffeU 
                                                        & (IData)(vlSelf->fulladder4_tb__DOT__b)) 
                                                       ^ 
                                                       ((IData)(fulladder4_tb__DOT__uut__DOT__cout1) 
                                                        << 1U)))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->fulladder4_tb__DOT__a) 
                                                        ^ 
                                                        ((IData)(vlSelf->fulladder4_tb__DOT__b) 
                                                         ^ (IData)(vlSelf->fulladder4_tb__DOT__cin))))))));
    }
}
