//ArrayQuestion15 : Sort an Array consisting of only 0s and 1s.
//Pattern : Two pointers.
//Solution01

#include <iostream>
#include <vector>
using namespace std;

// void SortZeroesAndOnes(vector<int> &v){
//   int zeroes_count = 0;
//   for(int ele:v){
//     if(ele==0){
//       zeroes_count++;
//     }
//   }
//   for(int i = 0 ; i<v.size() ; i++){
//     if(i<zeroes_count){
//       v[i]=0;
//     }
//     else{
//       v[i] = 1;
//     }
//   }
// }
// int main() {
//    int n;
//    cin>>n;

//   vector<int> v;
//   for(int i = 0 ; i<n ; i++){
//     int ele; cin>>ele;
//     v.push_back(ele);
//   }
//   SortZeroesAndOnes(v);
//   for(int i = 0 ; i<n ; i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
//   return 0;
// }

//Solution02

void sortZeroesAndOnes(vector<int> &v){

  int  left_ptr = 0;
  int  right_ptr = v.size()-1;

  while(left_ptr<right_ptr){
    if(v[left_ptr]==1 && v[right_ptr]==0){
      v[left_ptr++] = 0;
      v[right_ptr--] = 1;
    }
    if(v[left_ptr]==0){
      left_ptr++;
    }
    if(v[right_ptr]==1){
      right_ptr--;
    }
  }
}

int main() {
   int n;
   cin>>n;

  vector<int> v;
  for(int i = 0 ; i<n ; i++){
    int ele; cin>>ele;
    v.push_back(ele);
  }
  sortZeroesAndOnes(v);
  for(int i = 0 ; i<n ; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return 0;
}