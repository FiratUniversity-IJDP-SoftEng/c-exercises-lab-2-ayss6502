#include <stdio.h>
#include <cs50.h>

int main(void){

  int numbers = 0;
  long sum = 0;
  int the numbers;

  while(true){
    thenumbers = get_int("Please enter the numbers: \n");

    if(thenumbers ==-1){
      break;
    }
    sum += thenumbers;
    numbers++;
  }
  double avarage = (double) sum/numbers;
  printf("The avarage is: \n");

  return 0;
}
