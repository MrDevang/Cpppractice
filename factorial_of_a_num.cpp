#include<iostream>
using namespace std;
int main(){
    // factorial of a number program
    int n,i,fact=1;
    cout<<"enter number ";
    cin>>n;
    for(i=1; i<=n; i++){
        fact *=i;
    }
    cout<<"fact is "<<fact;
}