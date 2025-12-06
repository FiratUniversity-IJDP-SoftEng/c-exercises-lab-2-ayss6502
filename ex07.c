#include <stdio.h>

int main(void){
  
  for(int i=1; i<=10; i++){
    int column1 = i*5;
    int column2 = 100-((i-1)*10+1);
    int column3 = i;
    printf("%i %i %i \n"); 
  }
  return 0;
}
