#include<iostream>
using namespace std;
int main(){
    int A[5]={4,5,9,7,8};
    int i,max=A[0];
    for(i=1; i<5; i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"Max element of array is "<<max;
    return 0;
}