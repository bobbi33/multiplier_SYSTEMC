#include "multiplier.h"

SC_MODULE(multiplier_TB){

	sc_signal<sc_logic> clk, go, ready;
	sc_signal<sc_lv<4>> A,B;
	sc_signal<sc_lv<8>> W;

	Multiplier* mult;

	void goinput();
	void Ainput();
	void Binput();
	void clocking();

		SC_CTOR(multiplier_TB){
		
			mult = new Multiplier("Mult_Instance");

			mult->clk(clk);
			mult->go(go);
			mult->ready(ready);
			mult->W(W);
			mult->A(A);
			mult->B(B);

			SC_THREAD(goinput);
			SC_THREAD(Ainput);
			SC_THREAD(Binput);
			SC_THREAD(clocking);
		}
};
