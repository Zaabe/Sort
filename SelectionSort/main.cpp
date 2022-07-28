#include <iostream>
using namespace std;

void printArray(int inputArray[], int length){

  for(int i = 0;i<length;i++){
    cout<<inputArray[i]<<"\t";
  }
  cout<<"\n\n";
}

void sortArray(int inputArray[], int length){

  for(int i=0;i<length;i++){
    int posTemp = length-1;
    for(int j=length-1;j>=i;j--){
      if(inputArray[j]<inputArray[posTemp]){
        posTemp = j;
      }
    }
    int temp = inputArray[i];
    inputArray[i] = inputArray[posTemp];
    inputArray[posTemp] = temp;
  }
  printArray(inputArray, length);
}


int main(){
  int length = 5;
  srand(time(NULL));
  int array[5];

  for(int i = 0;i<5;i++){
      array[i] = rand() % 101;
    }
    printArray(array, length);
    sortArray(array, length);
    return 0;
}
