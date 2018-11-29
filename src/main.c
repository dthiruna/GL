 //  Copyright (c) 2018 Antoine Tran Tan


#include "my_header.h"
#include "TP_lib_suite.h"
void  initialiserTirage(void);
short tirerNumero(void);

int main(void)
{
    unsigned char tableau1 [6]={12,33,15,17,46,24},tableaugagnant [6],valeur=0,s,n,i,q;
    for(q=0;q<100;q++)
    {
        for(s=0;s<6;s++)
     {
        initialiserTirage();
        tableaugagnant[s]=tirerNumero();
     }

        for(i=0;i<6;i++)
     {
        for(n=0;n<6;n++)
        {
            if(tableau1 [i]==tableaugagnant[n])
            {
                valeur=valeur+1;
            }

        }
     }

    }

    return 0;
}
