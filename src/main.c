//  Copyright (c) 2018 Antoine Tran Tan


#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
    unsigned char joueur [6]={12,33,15,17,46,24},gagnant[6]={0,0,0,0};
	int q=0, s=0, n=0, i=0;
	

    for(q=0;q<100;q++)
    {
	 initialiserTirage();
			
        for(s=0;s<6;s++)
			
     {
        initialiserTirage();
		
       gagnant[s] = tirerNumero();
     }


	 
    }
    return 0;
}
