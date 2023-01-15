//ArrayQuestion13 : Rotate the given array 'a' by k steps, where k is non-negative.
//Note : k can be greater than n as as where n is the size of array 'a'.
//Solution01
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


// int main() {
//  int array[] = {1,2,3,4,5};
//  int n = 5;
//  int k = 2;
//   // k can be greater than n.
//   k = k%n;
//   int ansarray[5];
//   int j = 0;
//   //inserting last ke element in ansarray
//   for(int i = n-k ; i<n ; i++){
//     ansarray[j++] = array[i];
//   }
//   // inserting first n-k elements in ansarray.
//   for(int i = 0 ; i<=k; i++){
//     ansarray[j++] = array[i];
//   }
//   for(int i =0 ; i<n ; i++){
//     cout<<ansarray[i]<<" ";
//   }
//   cout<<endl;
//   return 0;
// }

//Solution02

int main() {
  vector<int> v = {1,2,3,4,5};
  int k = 2;
  k = k%v.size();
  
  reverse(v.begin(),v.end());
  reverse(v.begin(),v.begin()+k);
  reverse(v.begin()+k,v.end());

  for(int a:v){
    cout<<a<<" ";
  }
  cout<<endl;
  return 0;

  }