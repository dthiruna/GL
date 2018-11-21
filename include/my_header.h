 //  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"


int main(void)
{
    unsigned char bin[10]={12,3,2,5,17,15,27,6,19,10},i,seuil=18;
    int sat[10]={rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50},n,SEUILB=-100,SEUILH=200;
    int dist[10]={45,35,26,12,8,65,36,22,13,10},m,distance;
    
	for(i=0;i<10;i++)
		
    {
        if(bin[i]>seuil)
        {
            bin[i]=1;
        }
        else
        {
            bin[i]=0;
        }
    }

    for(n=0;n<10;n++)
    {
        if(sat[n]>SEUILH)
        {
            sat[n]=SEUILH;
        }else if(sat[n]<SEUILB)
        {
            sat[n]=SEUILB;
        }
    }


    for(m=0;m>10;m--)
    {
        distance=abs(dist [m]-dist[m-1]);
        dist[m]=distance;
    }


  
    return 0;
}
