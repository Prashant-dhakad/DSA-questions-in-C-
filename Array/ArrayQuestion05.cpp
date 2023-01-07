//ArrayQuestion05 : Count the number of occurences of a particular element x.
#include <iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v(6);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  cout<<"Enter x :";
  int x;
  cin>>x;

  int occurences = 0;
  for(int i = 0 ; i<v.size();i++){
    if(v[i]==x){
      occurences++;
    }
  }
    cout<<occurences<<endl;
    return 0;
}