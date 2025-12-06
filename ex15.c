#include <stdio.h>

int main(void){
    int n = 5; 
    for (int i = 1; i <= n; i++){
        for (int m = 0; m < n - i; m++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("%i", j);
        }
        for (int k = i - 1; k >= 1; k--){
            printf("%i", k);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--){
        for (int m = 0; m < n - i; m++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("%i", j);
        }
        for (int k = i - 1; k >= 1; k--){
            printf("%i", k);
        }
        printf("\n");
    }
    return 0;
}
