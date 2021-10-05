#include <stdio.h>
void printint(int* arr, int arrsize){
  printf("[ ");
  for(int i=0;i<arrsize;i++){
    printf("%d ",arr[i]);
  }
  printf("]");
}
