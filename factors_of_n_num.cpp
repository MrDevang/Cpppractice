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
    cout<<"sum of factors is = "<<sum;
    return 0;
}