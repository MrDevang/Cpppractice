#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter n ";
    cin>>n;
    for(i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" is a factor of "<<n<<endl;
            sum+=i; 
        }
    }
    if(2*n==sum){
    cout<<"perfect number";
    }
    else{
        cout<<"not a perfect number";
    }
    return 0;
}