#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"enter n ";
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    cout<<"sum of digits is = "<<sum;
    return 0;
}