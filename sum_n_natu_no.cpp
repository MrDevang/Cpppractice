#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i;
    cout<<"enter n ";
    cin>>n;
   for(i=1; i<=n; i++){
        sum += i; //sum=sum+i;
    }
    cout<<"sum of "<<n<<" natural no. is "<<sum;
    return 0;
}