// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_regfile.h for the primary calling header

#ifndef VERILATED_VTB_REGFILE___024ROOT_H_
#define VERILATED_VTB_REGFILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_regfile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_regfile___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_regfile__DOT__clk;
    CData/*0:0*/ tb_regfile__DOT__we;
    CData/*4:0*/ tb_regfile__DOT__rs1;
    CData/*4:0*/ tb_regfile__DOT__rs2;
    CData/*4:0*/ tb_regfile__DOT__rd;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0;
    IData/*31:0*/ tb_regfile__DOT__wd;
    IData/*31:0*/ tb_regfile__DOT__rd1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> tb_regfile__DOT__uut__DOT__regs;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_regfile__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_regfile___024root(Vtb_regfile__Syms* symsp, const char* namep);
    ~Vtb_regfile___024root();
    VL_UNCOPYABLE(Vtb_regfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
