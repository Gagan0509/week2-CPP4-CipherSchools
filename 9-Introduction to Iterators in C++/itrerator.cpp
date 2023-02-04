#include<bits/stdc++.h>
using namespace std;



int main(){
 vector<string>solar_sys = {"mer","venus","earth","mars","jupitor"};
  
  vector<string>::iterator shivam = solar_sys.begin();
    vector<string>::iterator champa = solar_sys.begin();
     cout<<*next(shivam,3)<<endl;
     advance(shivam,3);
     cout<<*shivam<<endl;
 // cout<<"lets go to earth"<<*(shivam + 2)<<endl;
  return 0;
}