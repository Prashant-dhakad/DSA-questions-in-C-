//ArrayQuestion12 : Fine the second largest element in the given Array.
//Only for unique positive integers.
//Solution01
#include <iostream>
using namespace std;

int largestElementIndex(int array[], int size){
  int max = INT32_MIN;
  int maxIndex = -1;
  for(int i = 0 ; i<size; i++){
    if(array[i]>max){
      max=array[i];
      maxIndex = i;
    }
  }
  return maxIndex;
}

// int main() {
//   int array[] = {2,3,5,7,6,1};
//   int indexOfLargest = largestElementIndex(array,6);
//   array[indexOfLargest] = -1;
//   int indexOfSecondLarest = largestElementIndex(array,6);
//   cout<<array[indexOfSecondLarest]<<endl;
//   return 0;
// }

//Solution02
//This will work for duplicate positive integers.

// int main() {
//   int array[] = {2,3,5,7,6,1,7,4};
//   int n = 7;
//   int indexOfLarest = largestElementIndex(array,n);
//   int largestElement = array[indexOfLarest];
//   for(int i = 0 ; i<n ; i++){
//     if(array[i]==largestElement){
//       array[i] = -1;
//     }
//   }
//   int indexOfSecondLargest = largestElementIndex(array,n);
//   cout<<array[indexOfSecondLargest]<<endl;
//   return 0;
// }

//Solution03
//More optimized.

int secondLarestElement(int array[] , int size){
  int max = INT8_MIN;
  int second_max = INT8_MIN;

  for(int i = 0 ; i<size ; i++){
    if(array[i]>max){
      max = array[i];
    }
  }

  for(int i = 0 ; i<size ; i++){
    if(array[i]>second_max && array[i]!=max){
      second_max = array[i];
    }
  }
  return second_max;
}

int main() {
  int array[] = {2,3,5,7,6,1,7};
  int n =7;
  cout<<secondLarestElement(array,n)<<endl;
  return 0;
}
