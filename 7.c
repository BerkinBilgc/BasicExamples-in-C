#include<stdio.h>
#include<conio.h>

int main(){

int my_array[10];
srand ( time(NULL) );

int i;
for (i = 0; i < 10; i++) {
    my_array[i] = (rand()% 1000);
    printf("%d ", my_array[i]);
}

int max,min;

max = my_array[0];
min = my_array[0];
for(i=1; i<10; i++)
    {
        if(my_array[i] > max)
        {
            max = my_array[i];
        }

        if(my_array[i] < min)
        {
            min = my_array[i];
        }
    }

    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d", min);
      

}
