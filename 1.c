// my computer's operating system is 64 bit
#include <stdio.h>
#include <limits.h>
#include<float.h>
int main() {
	int intType;
    float floatType ;
    double doubleType;
    long longType;
	short shortType;
    char charType;
    
	unsigned int unsignedInt;
	unsigned long unsignedLong;
	unsigned char unsignedChar;
	
    // sizeof evaluates the size of a variable
    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("Size of long: %d bytes\n", sizeof(longType));
    printf("Size of short: %d bytes\n", sizeof(shortType));
    printf("Size of char: %d byte\n", sizeof(charType));
    printf("----------------------------\n");
    printf("Size of UnAssignInt: %d byte\n", sizeof(unsignedInt));
    printf("Size of UnAssignLong: %d byte\n", sizeof(unsignedLong));
    printf("Size of UnAssignChar: %d byte\n", sizeof(unsignedChar));
    
    printf("\n------ Limits of All Datatypes ----------------------\n");
    printf("Character Minimum value - SCHAR_MIN = %d \n", SCHAR_MIN);
    printf("Character Maximum value - SCHAR_MAX = %d \n", SCHAR_MAX);
    printf("Unsigned Character Max value - UCHAR_MAX = %d \n", UCHAR_MAX);
    
    printf("--------------------------------------------------\n"); 
    printf("Short Int Minimum value - SHRT_MIN = %d \n", SHRT_MIN);
    printf("Short Int Maximum value - SHRT_MAX = %d \n", SHRT_MAX);
 	printf("--------------------------------------------------\n"); 
    printf("Int Minimum value - INT_MIN = %d \n", INT_MIN);
    printf("Int Maximum value - INT_MAX = %d \n", INT_MAX);
    printf("Unsigned Int Maximum value - UINT_MAX = %u \n", UINT_MAX);
	printf("----------------------------\n"); 
    printf("Long Int Minimum value - LONG_MIN = %ld \n", LONG_MIN);
    printf("Long Int Maximum value - LONG_MAX = %ld \n", LONG_MAX);
    printf("Unsigned Long Int Maximum value - ULONG_MAX = %lu \n", ULONG_MAX);
	printf("--------------------------------------------------\n"); 
    // We can also use '%f' format specifier
    printf("Float Minimum value - FLT_MIN = %e \n", FLT_MIN);
    printf("Float Maximum value - FLT_MAX = %e \n", FLT_MAX);
 	printf("--------------------------------------------------\n"); 
    // We can also use '%lf' format specifier
    printf("Double Minimum value - DBL_MIN = %e \n", DBL_MIN);
    printf("Double Maximum value - DBL_MAX = %e \n", DBL_MAX);
 	printf("--------------------------------------------------\n"); 
    
    return 0;
    
}
