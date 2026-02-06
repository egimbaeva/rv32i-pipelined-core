// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "Vpc__pch.h"

VlCoroutine Vpc___024root___eval_initial__TOP__Vtiming__0(Vpc___024root* vlSelf);
VlCoroutine Vpc___024root___eval_initial__TOP__Vtiming__1(Vpc___024root* vlSelf);

void Vpc___024root___eval_initial(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vpc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vpc___024root___eval_initial__TOP__Vtiming__0(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("pc.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_pc__DOT__clk = 0U;
    vlSelfRef.tb_pc__DOT__reset = 1U;
    vlSelfRef.tb_pc__DOT__pc_next = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         27);
    vlSelfRef.tb_pc__DOT__reset = 0U;
    vlSelfRef.tb_pc__DOT__pc_next = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         30);
    vlSelfRef.tb_pc__DOT__pc_next = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         31);
    vlSelfRef.tb_pc__DOT__pc_next = 0x0000000cU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         32);
    vlSelfRef.tb_pc__DOT__pc_next = 0x00000010U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         33);
    vlSelfRef.tb_pc__DOT__pc_next = 0x00000014U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         34);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_pc.v", 
                                         36);
    VL_FINISH_MT("tb/tb_pc.v", 37, "");
    co_return;}

VlCoroutine Vpc___024root___eval_initial__TOP__Vtiming__1(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_pc.v", 
                                             17);
        vlSelfRef.tb_pc__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_pc__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vpc___024root___eval_triggers__act(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_triggers__act\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tb_pc__DOT__reset) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pc__DOT__reset__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_pc__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pc__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc__DOT__clk__0 
        = vlSelfRef.tb_pc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc__DOT__reset__0 
        = vlSelfRef.tb_pc__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vpc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vpc___024root___nba_sequent__TOP__0(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___nba_sequent__TOP__0\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pc__DOT__pc_current = ((IData)(vlSelfRef.tb_pc__DOT__reset)
                                         ? 0U : vlSelfRef.tb_pc__DOT__pc_next);
}

void Vpc___024root___eval_nba(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_nba\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vpc___024root___timing_resume(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___timing_resume\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpc___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpc___024root___eval_phase__act(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_phase__act\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vpc___024root___eval_triggers__act(vlSelf);
    Vpc___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vpc___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vpc___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vpc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpc___024root___eval_phase__nba(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_phase__nba\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpc___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpc___024root___eval_nba(vlSelf);
        Vpc___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpc___024root___eval(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpc___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_pc.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/tb_pc.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vpc___024root___eval_phase__act(vlSelf));
    } while (Vpc___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vpc___024root___eval_debug_assertions(Vpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_debug_assertions\n"); );
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
