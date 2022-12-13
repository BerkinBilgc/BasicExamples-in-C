#include <stdio.h>
#include <stdlib.h>
int addNumbers(int x, int y,int z);

int main(void){
    test(200, 300, 600);
    test(100, 450, 400);
    test(990, 700, 501);
    test(400, 200, 400);
    
    }       
   int test(int x, int y,int z)
        {
            int n = 500;
            int a = abs(x - n);
            int b = abs(y - n);
            int c = abs(z - n);
            
            int min = (a<b) ? (a<c?a:c) : (b<c?b:c);
            
            if(a == b & a == c & b == c ){
            	printf("\n 3 numbers at the same distance");
			}
			else if(a == b & (min == a | min == b)){
				printf("\n 2 numbers at the same distance.And this number is %d",x);
				
			}
			else if(a == c & (min == a | min == c)){
				printf("\n 2 numbers at the same distance.And this number is %d",x);
				
			}
			else if(c == b & (min == c | min == b)){
				printf("\n 2 numbers at the same distance.And this number is %d",y);
				
			}
            else if(min == a){
				printf("\n %d closest to 500", x );
				
			}
			else if(min == b){
				printf("\n %d closest to 500", y );	
			}
			
			else if(min == c) {
				printf("\n %d closest to 500", z );
			}
			
        }
