#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
int Number1 = 0xCAFE;
int Number2 = 0XCAF;
int diffarence = Number1-Number2;

Number1 = Number1- diffarence;


printf("Equivalent hexadecimal number is: 0X%X",Number1);
	
}


