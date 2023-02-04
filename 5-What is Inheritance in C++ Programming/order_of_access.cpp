#include<bits/stdc++.h>
using namespace std;

class A{
 public:
 A(){
    cout<<"A's Const. "<<endl;
 }
 ~A(){
  cout<<"A's dest. "<<endl;  
 }
};

class B: public A{
    B(){
    cout<<"B's Const. "<<endl;
 }
   ~B(){
  cout<<"B's dest. "<<endl;  
 }
};


int main(){
    B obj();
    
   
    return 0;

}