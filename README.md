# rv32i-pipelined-core
5-stage Pipelined RISC-V Core (RV32I)

# 5-stage Pipelined RISC-V Core (RV32I) — Verilog
A 5-stage pipelined RISC-V CPU core (RV32I) implemented in Verilog HDL.

## Pipeline Stages
- IF: Instruction Fetch
- ID: Instruction Decode / Register Fetch
- EX: Execute
- MEM: Memory Access
- WB: Write Back

## Features (Planned)
- [ ] RV32I base instruction set support
- [ ] 5-stage pipeline datapath
- [ ] Pipeline registers (IF/ID, ID/EX, EX/MEM, MEM/WB)
- [ ] Forwarding unit
- [ ] Hazard detection and stalling
- [ ] Branch handling and pipeline flush
- [ ] Testbench and waveform simulation

## Project Structure
rtl/   - Verilog RTL modules
tb/    - Testbenches
docs/  - Diagrams and documentation
sim/   - Simulation scripts

## Roadmap
See the full checklist in this repository.

## How to Run (Coming Soon)
Simulation instructions will be added after the first modules are implemented.
