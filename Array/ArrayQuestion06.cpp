//ArrayQuestion06 : Count the number of elements  strictly greater than value x.
#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> v(6);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  cout<<"Enter x : ";
  int x;
  cin>>x;

  int count = 0;
  for(int i = 0 ; i<v.size(); i++){
    if(v[i]>x){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}