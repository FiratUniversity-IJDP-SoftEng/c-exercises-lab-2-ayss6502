#include <stdio.h>
#define size 10

int main(void){
  int numbers[size];
  long sum=0;
  printf("The numbers: ");
  for(int i=0; i<size; i++){
    scanf("%d",&numbers[i]);
    sum += numbers[i];
    printf("%i,",numbers[i]);
  }
  printf("\n");
  printf("The sum of numbers: %ld \n", sum);

  double avarage = sum/size;
  printf("The avarage of the numbers: %.2f \n");

  return 0;
}
