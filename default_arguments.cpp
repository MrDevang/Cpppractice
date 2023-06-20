#include<iostream>
using namespace std;
//by this we can define the overloaded functions by writing single function
int sum(int a=0,int b=0, int c=0){
    return a+b+c;
}
int main(){
    cout<<sum(2)<<endl;
    cout<<sum(10,5)<<endl;
    cout<<sum(10,5,3)<<endl;
}