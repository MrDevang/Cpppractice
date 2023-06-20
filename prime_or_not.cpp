#include<iostream>
using namespace std;
int main(){
    int n,i,m,flag=0;
    cout<<"enter number\n";
    cin>>n;
    m=n/2;
    for(i=2; i<=m; i++){
        if(n%i==0){
            cout<<"not prime\n";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
}