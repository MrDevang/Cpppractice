#include<iostream>
using namespace std;
int main(){
    //b=total bill amount
    //d=discount
    float b,d;
    d=0.0;
    cout<<"enter total bill amount"<<endl;
    cin>>b;
    if(b>=500){
        d=b*20/100;
    }
    else if(b>=100 && b<500){
        d=b*10/100;
    }
    cout<<"bill amount is "<<b<<endl;
    cout<<"discount is "<<d<<endl;
    cout<<"total amount is "<<b-d<<endl;
    return 0;
}
