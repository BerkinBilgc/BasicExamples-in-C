#include<stdio.h>
#include<conio.h>

int main(){

int numbers[1001];
int sum;
int i;

for(i = 0; i <= 1000; i++){
    numbers[i] = i;   
    printf("%d ", numbers[i]);
    sum += numbers[i];   
}

// Check it sum process
int n = 1000;
int m = 1001;

int check = (n*m)/2;
printf("\n--------------------------------\n");
printf("Sum = %d", sum);
printf("\n--------------------------------\n");
printf("Check Sum = %d", check);


}
