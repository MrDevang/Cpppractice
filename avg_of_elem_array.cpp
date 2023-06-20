#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter number of elements ";
    cin>>n;
    int A[n];
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    for(i=0; i<n; i++){
        sum+=A[i];
    } 
    cout<<sum/n<<" = avg";
    return 0;
}