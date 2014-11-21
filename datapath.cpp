#include "datapath.h"

void Datapath::data_evl(){

	sc_uint<9> temp;

	if(initial == '1')
		W = '0';
	else if(seg_do == '1')
		W = ((sc_lv<9>)((sc_uint<8>)W + (sc_uint<8>)A)).range(7,0);

}
