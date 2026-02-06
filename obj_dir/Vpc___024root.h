// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpc.h for the primary calling header

#ifndef VERILATED_VPC___024ROOT_H_
#define VERILATED_VPC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpc___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pc__DOT__clk;
    CData/*0:0*/ tb_pc__DOT__reset;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pc__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pc__DOT__reset__0;
    IData/*31:0*/ tb_pc__DOT__pc_next;
    IData/*31:0*/ tb_pc__DOT__pc_current;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vpc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpc___024root(Vpc__Syms* symsp, const char* namep);
    ~Vpc___024root();
    VL_UNCOPYABLE(Vpc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
