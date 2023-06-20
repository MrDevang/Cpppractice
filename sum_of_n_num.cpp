#include<iostream>
using namespace std;
int main(){
    int n,i=0,sum=0;
    cout<<"enter num"<<endl;
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum is \n"<<sum<<endl;
    return 0;
}