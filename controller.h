#include <systemc.h>

SC_MODULE(Controller){

	sc_in<sc_logic> clk,go;
	sc_in<sc_lv<4>> B;
	sc_out<sc_logic> initial, seg_do,ready;
	
	void Control_evl();
	enum states {S0,S1,S2,S3};
	
	states state;
	sc_uint<4> count;

	SC_CTOR(Controller){
		state = S0;
		SC_METHOD(Control_evl);
		sensitive << clk.pos();
	}
};
