//ArrayQuestion09 : Find the total number of paris in the Array whose sum is equal to the given value x.
#include <iostream>
using namespace std;

int main() {
  int array[] = {3,4,6,7,1};
  int target  = 7;
  
  int size = 7;
  int pairs = 0;
  for(int i = 0 ; i<size ; i++){
    for(int j = i+1; j<size ; j++){
      if(array[i]+array[j]==target){
        pairs++;
      }
    }
  }
  cout<<pairs<<endl;
  return 0;
}