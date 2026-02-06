// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "Vpc__pch.h"

VL_ATTR_COLD void Vpc___024root___eval_static(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_static\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc__DOT__clk__0 
        = vlSelfRef.tb_pc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc__DOT__reset__0 
        = vlSelfRef.tb_pc__DOT__reset;
}

VL_ATTR_COLD void Vpc___024root___eval_final(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_final\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpc___024root___eval_settle(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_settle\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vpc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpc___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_pc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_pc.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpc___024root___ctor_var_reset(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___ctor_var_reset\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_pc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768870107073948756ull);
    vlSelf->tb_pc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 705942815191431898ull);
    vlSelf->tb_pc__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12771439063688640606ull);
    vlSelf->tb_pc__DOT__pc_current = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4970653476383461828ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_pc__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pc__DOT__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
