//ArrayQuestion10 : Fine the unique number in a  given Array where all the elements are being repeated twice with one value being unique.
#include <iostream>
using namespace  std;

int main() {
  int array[] = {2,3,1,3,2,4,1};
  int size = 7;
  int unique = 0;
  for(int i = 0 ; i<size ; i++) {
    for(int j = i+1 ; j<size ; j++){
      if(array[i]==array[j]) {
        array[i] = array[j] = -1;
      }
    }
  }
  for(int i = 0 ; i<size ; i++) {
    if(array[i]>0){
      unique = array[i];
    }
  }
  cout<<unique<<endl;
  return 0;
}