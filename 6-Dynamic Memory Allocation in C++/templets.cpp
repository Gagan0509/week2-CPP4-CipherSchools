#include<bits/stdc++.h>
using namespace std;

template<typename T>
T sum(vector<int>&n , T def = 0){
   T s = def;
   for(T ele: n){
        s+=ele;
   }
return s;
}
// double sum(vector<double>&v, int def = 0){
//    double s = def;
//    for(double ele :v){
//       s+=ele;
//    }

//  return s;

// }

int main(){

    vector<int> v = {1,2,3,4,5,6,7,8,9};
     vector<double> v2= {1.5,2.6,3.6,4,5.20,6,7.36,8.22,9};
      vector<string>vs = {"template" , "are" , "magical"};
      //cout<<sum<int>(v)<<endl;
      cout<<sum<string>(vs ,"")<<endl;
      cout<<sum<double>(v2)<<endl;
      return 0;
}