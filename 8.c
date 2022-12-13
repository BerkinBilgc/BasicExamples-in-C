// Here, the address of the pointer has not changed because when we give a value, a place in memory is reserved for the created value. When we want to change this value,
// we go to this address and change the value in the address, not the address. Therefore, although the value has changed here, the address has remained the same.
#include<stdio.h>
#include<conio.h>

int main(){

int num = 1;
int *ptr; 

ptr = &num;

printf("num value via ptr: %d\n", num);
printf("num value via ptr: %d\n", ptr);
printf("num value via ptr: %d\n", *ptr);

printf("\n------ After increase 1 ------\n");
num = num +1;

printf("\nnum value via ptr: %d\n", num);
printf("num value via ptr: %d\n", ptr);
printf("num value via ptr: %d\n", *ptr);


}
