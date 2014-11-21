#include "multiplier_tb.h"

void multiplier_TB::goinput(){
	go = SC_LOGIC_1;
	wait(10,SC_NS);
	go = SC_LOGIC_0;
	wait(200,SC_NS);
	go = SC_LOGIC_1;
	wait(10,SC_NS);
	go = SC_LOGIC_0;
}

void multiplier_TB::Ainput(){
	A = "0d10";
	wait(210,SC_NS);
	A = "0d12";
}

void multiplier_TB::Binput(){
	B = "0d15";
	wait(210,SC_NS);
	B = "0d25";
}

void multiplier_TB::clocking(){
	int i;
	clk = SC_LOGIC_0;
	for(i = 0; i<= 50; i++){
		clk= SC_LOGIC_0;
		wait(5, SC_NS);
		clk= SC_LOGIC_1;
		wait(5,SC_NS);
	}
	wait();
}
