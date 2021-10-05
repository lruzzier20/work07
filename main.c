#include <stdio.h>
#define ARR_SIZE 10
void main(){
  void prntint(int* arr, int arrsize);
  double avg(int* arr, int arrsize);
  void copy(int* first, int* second, int arrsize);
  int arr[ARR_SIZE];
  int arr2[ARR_SIZE];
  for(int i=0;i<ARR_SIZE;i++){
    arr[i]=i;
    arr2[i]=ARR_SIZE-i-1;
  }
  prntint(arr, ARR_SIZE);
  prntint(arr2, ARR_SIZE);
  printf("avg=%lf\n",avg(arr, ARR_SIZE));
  copy(arr, arr2, ARR_SIZE);
  prntint(arr2, ARR_SIZE);
}
