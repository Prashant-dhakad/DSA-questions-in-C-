//Question01 : Calculate the sum of all the elements in the given array.

#include <iostream>
using namespace std;

int main() {
  
  int array[] = {3,4,10,11,12};
  int size = sizeof(array)/sizeof(array[0]);
  int sum = 0;
  
  for(int i = 0 ; i<size ; i++){
    sum+=array[i];
  }
  cout<<sum<<endl;
  return 0;
}