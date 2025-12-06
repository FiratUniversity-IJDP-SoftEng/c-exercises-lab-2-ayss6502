#include <stdio.h>
#include <cs50.h>

int main(void){

    int n = get_int("Please enter a number between 1-50 \n");

    unsigned long long factorial = 1;

    int m = 1;

    while(m <= n){
        factorial *= m;
        m++;
    }
    printf("%i! = %llu\n",n,factorial);

    if(n > 20){
        printf("There may be errors in the calculations for numbers greater than 20!\n");
    }
    return 0;
}
