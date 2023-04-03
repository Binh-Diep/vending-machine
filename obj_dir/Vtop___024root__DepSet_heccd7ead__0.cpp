// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__state_current = vlSelf->top__DOT__dut__DOT__state_next;
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h28331cb3_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_h26f85e98_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    vlSelf->soda_o = ((2U & (IData)(vlSelf->top__DOT__dut__DOT__state_current))
                       ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state_current))
                           ? (((IData)(vlSelf->nickel_i) 
                               | (IData)(vlSelf->dime_i)) 
                              | (IData)(vlSelf->quarter_i))
                           : ((IData)(vlSelf->dime_i) 
                              | (IData)(vlSelf->quarter_i)))
                       : (IData)(vlSelf->quarter_i));
    __Vtableidx1 = (((IData)(vlSelf->quarter_i) << 4U) 
                    | (((IData)(vlSelf->dime_i) << 3U) 
                       | (((IData)(vlSelf->nickel_i) 
                           << 2U) | (IData)(vlSelf->top__DOT__dut__DOT__state_current))));
    vlSelf->top__DOT__dut__DOT__state_next = Vtop__ConstPool__TABLE_h28331cb3_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->quarter_i) << 3U) 
                    | (((IData)(vlSelf->dime_i) << 2U) 
                       | (IData)(vlSelf->top__DOT__dut__DOT__state_current)));
    vlSelf->top__DOT__dut__DOT__tmp_change = Vtop__ConstPool__TABLE_h26f85e98_0
        [__Vtableidx2];
    vlSelf->change_o = vlSelf->top__DOT__dut__DOT__tmp_change;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->nickel_i & 0xfeU))) {
        Verilated::overWidthError("nickel_i");}
    if (VL_UNLIKELY((vlSelf->dime_i & 0xfeU))) {
        Verilated::overWidthError("dime_i");}
    if (VL_UNLIKELY((vlSelf->quarter_i & 0xfeU))) {
        Verilated::overWidthError("quarter_i");}
}
#endif  // VL_DEBUG
