#include <systemc.h>

SC_MODULE(Datapath){

	sc_in<sc_logic> clk,initial, seg_do;
	sc_in<sc_lv<4>> A;
	sc_out<sc_lv<8>> W;

	void data_evl();

	SC_CTOR(Datapath){
		SC_METHOD(data_evl);
		sensitive << clk.pos();
	}
};
