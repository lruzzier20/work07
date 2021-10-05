#include <stdio.h>
#define ARR_SIZE 10
void main(){
  void prntint(int* arr, int arrsize);
  double avg(int* arr, int arrsize);
  int arr[ARR_SIZE];
  for(int i=0;i<ARR_SIZE;i++){
    arr[i]=i;
  }
  prntint(arr, ARR_SIZE);
  printf("avg=%lf\n",avg(arr, ARR_SIZE));
}
