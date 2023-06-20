#include<iostream>
using namespace std;
int main(){
    float m1,m2,m3,total,avg;
    cout<<"enter marks of 3 subjects\n";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3;
    if(avg>=60){
        cout<<"A"<<endl;
    }
    else if(avg>=35 && avg<60){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
    return 0;

}