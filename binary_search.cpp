#include<iostream>
using namespace std;
int main(){
    int A[10],l=0,h=9,key,mid,n=10;
    cout<<"enter numbers"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"enter key ";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"found at"<<mid;
            return 0;
        }
        else if(key<A[mid]){
            h=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    cout<<"not found ";
    return 0;
}