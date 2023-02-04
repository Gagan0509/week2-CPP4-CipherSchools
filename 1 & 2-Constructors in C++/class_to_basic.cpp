#include<bits/stdc++.h>
using namespace std;

class Time{

public:
int hours;
int m;

Time(int mins){
 hours = mins/360;
 m = mins%60;


}
operator int(){
    return (this->hours*60)+m;
}

};



int main(){

Time t(340);
int time_to_min = (int)t;

cout<<"time in mins is"<<time_to_min<<endl;
return 0;


}