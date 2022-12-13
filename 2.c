// my computer's operating system is 64 bit
// because they are pointers. They take up 8 bytes on a 64-bit operating system.
#include <stdio.h>
#include <limits.h>
#include<float.h>
int main() {

char *charType;
unsigned char *unsignedChar;
int *intType;
unsigned int *unsignedInt;

printf("Size of char: %d byte\n", sizeof(charType));
printf("Size of UnAssignChar: %d byte\n", sizeof(unsignedChar));

printf("Size of int: %d bytes\n", sizeof(intType));
printf("Size of UnAssignInt: %d byte\n", sizeof(unsignedInt));

printf("Char:%d",*charType);

}
