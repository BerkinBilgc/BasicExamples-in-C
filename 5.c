#include<stdio.h>
#include<conio.h>
int main()
{
int i, j, n = 20;

for(i = n; i >= 1; i--)
{
for(j = 1; j <= i; j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
