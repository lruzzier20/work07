#include <stdio.h>
#define ARR_SIZE 3
void main(){
  int arr[ARR_SIZE];
  for(int i=0;i<ARR_SIZE;i++){
    arr[i]=i;
  }
  printint(arr, ARR_SIZE);
}
