// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__state_current))) {
        if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->soda_o))))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:128: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 128, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:129: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 129, "");
                }
            }
        } else {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY(vlSelf->soda_o)) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:132: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 132, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:133: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 133, "");
                }
            }
        }
    }
    if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__state_current))) {
        if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->soda_o))))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:138: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 138, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((2U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:139: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 139, "");
                }
            }
        } else {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY(vlSelf->soda_o)) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:142: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 142, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:143: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 143, "");
                }
            }
        }
    }
    if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__state_current))) {
        if (((4U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i)) 
             | (2U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i)))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->soda_o))))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:148: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 148, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((3U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:149: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 149, "");
                }
            }
        } else {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY(vlSelf->soda_o)) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:152: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 152, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:153: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 153, "");
                }
            }
        }
    }
    if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__state_current))) {
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY(vlSelf->soda_o)) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:158: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 158, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:159: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 159, "");
                }
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->soda_o))))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:163: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 163, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:164: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 164, "");
                }
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->soda_o))))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:167: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 167, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:168: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 168, "");
                }
            }
        } else if ((5U == (IData)(vlSelf->top__DOT__dut__DOT__coin_i))) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->soda_o))))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:171: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 171, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_UNLIKELY((4U != (IData)(vlSelf->change_o)))) {
                    VL_WRITEF("[%0t] %%Error: design_main.sv:172: Assertion failed in %Ntop.dut.proc_assertion: 'assert' failed.\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/design_main.sv", 172, "");
                }
            }
        }
    }
    vlSelf->soda_o = vlSelf->top__DOT__dut__DOT__tmp_soda;
    vlSelf->change_o = vlSelf->top__DOT__dut__DOT__tmp_change;
}
