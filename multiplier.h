#include "controller.h"
#include "datapath.h"

SC_MODULE(Multiplier){

	sc_in<sc_logic> clk,go;
	sc_in<sc_lv<4>> A,B;
	sc_out<sc_logic> ready;
	sc_out<sc_lv<8>> W;

	sc_signal<sc_logic> initial, seg_do; 

	Datapath* datapath;
	Controller* controller;

	SC_CTOR(Multiplier){
	
		datapath = new Datapath("datapathInst");
			datapath->clk(clk);
			datapath->A(A);
			datapath->W(W);
			datapath->initial(initial);
			datapath->seg_do(seg_do);

		controller = new Controller("controllerInst");
			controller->clk(clk);
			controller->go(go);
			controller->B(B);
			controller->initial(initial);
			controller->seg_do(seg_do);
			controller->ready(ready);
	
	}
};
