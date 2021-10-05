#include <stdio.h>
void prntint(int* arr, int arrsize){
  printf("[ ");
  for(int i=0;i<arrsize;i++){
    printf("%d ",arr[i]);
  }
  printf("]\n");
}

double avg(int* arr, int arrsize){
  double total=0;
  for(int j=0;j<arrsize;j++){
    total+=arr[j];
  }
  return total/arrsize;
}
