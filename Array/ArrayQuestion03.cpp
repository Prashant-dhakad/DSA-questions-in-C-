// ArrayQuestion03 : Search if a given element is present in the array or not. If it is not present then return -1 else return the index(Linear Search).
#include <iostream>
using namespace std;
int main() {
  int array[] = {3,9,18,11,9};
  int size = sizeof(array)/sizeof(array[0]);
  int key = 11;
  int ans = -1;

  for(int i = 0 ; i<size ; i++){
    if(array[i]==key){
      ans = i;
    }
  }
  cout<<ans<<endl;
  return 0;
}