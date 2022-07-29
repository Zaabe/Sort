#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void printArray(int inputArray[],int length){

  for(int i = 0;i<length;i++){
    cout<<inputArray[i]<<"\t";
  }
  cout<<"\n\n";
}


void sortArray(int inputArray[], int length){

  for(int i = 0;i<length;i++){
    for(int j = 1;j<length-i;j++){

      if(inputArray[j]<inputArray[j-1]){
        int minTemp = inputArray[j];
        inputArray[j] = inputArray[j-1];
        inputArray[j-1] = minTemp;
      }
    }
  }
  printArray(inputArray,length);
}

int main(){
  int length = 5;
  srand(time(NULL));
  int array[length];

for(int i = 0;i<length;i++){
    array[i] = rand() % 101;
  }
  printArray(array, length);
  sortArray(array, length);
  return 0;
}
