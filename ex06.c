#include <stdio.h>

int main(void){
  for(int i=100; i>=50; i--){
    if(i%3==0){
      printf("%i, ",i);
    }
    if(i==51){
      printf("%i",i);
    }
  }
  printf("\n");

  return 0;
}
