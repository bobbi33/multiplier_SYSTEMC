#include "controller.h"

void Controller::Control_evl(){
	
	switch(state)
	{
	case S0 :
		ready = SC_LOGIC_0;
		seg_do = SC_LOGIC_0;
		initial = SC_LOGIC_0;
		if(go == '1')
			state = S1;
		else
			state = S0;
		break;
	case S1:
		ready = SC_LOGIC_0;
		initial = SC_LOGIC_1;
		seg_do = SC_LOGIC_0;
		count = (sc_uint<4>)B;
		state = S2;
		break;
	case S2:
		ready = SC_LOGIC_0;
		initial = SC_LOGIC_0;
		seg_do = SC_LOGIC_1;
		count--;
		if(count == '0')
			state = S3;
		else
			state = S2;
		break;
	case S3:
		ready = SC_LOGIC_1;
		initial = SC_LOGIC_0;
		seg_do = SC_LOGIC_0;
		state = S0;
		
	} 
}
