
include <math.h>
#include <stdlib.h>


void main (void)
{
	unsigned short S1=0;
	unsigned short S2=0;
	unsigned short n=0;
	unsigned short n2=0;
	unsigned short S3=0;
	unsigned char valeurs=0;
	unsigned short n3=0;
	
	while(n<10)
	{
		S1=3*n+S1;
		n++;
	}
	
	while((3*n2)<9876)
	{
     	S2=3*n2+S2;
		n2++;
	
	}
	
	while( n3<12)
	{
		valeurs= rand(1,10);
		S3=valeurs+S3;
	    n++;
	}
	
	
	
}
 
