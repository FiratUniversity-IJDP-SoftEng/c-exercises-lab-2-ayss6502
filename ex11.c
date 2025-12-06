#include <stdio.h>

int main(void){

    int n=5;

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
