#include "multiplier_tb.h"

int sc_main(int argc, char **argv){
		
	multiplier_TB mul("mul_Instance");

	sc_trace_file* VCDFile;
	VCDFile = sc_create_vcd_trace_file("MULT");
		sc_trace(VCDFile, mul.A,"A");
		sc_trace(VCDFile, mul.B,"A");
		sc_trace(VCDFile, mul.clk,"clk");
		sc_trace(VCDFile, mul.W,"W");
		sc_trace(VCDFile, mul.go,"go");
		sc_trace(VCDFile, mul.ready,"ready");

		sc_start(2700,SC_NS);
		return 0;

}
