#include<iostream>
using namespace std;
int main(){
    cout<<"menu\n";
    cout<<"1.ADD\n"<<"2.SUB\n"<<"3.MUL\n"<<"4.DIV\n";
    
    int option;
    cout<<"enter your choice\n";
    cin>>option;
    int a,b,c;
    cout<<"enter 2 no.\n";
    cin>>a>>b;
    
    switch(option){
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
        case 4: c=a/b;
        break;
        default:cout<<"INVALID CHOICE";
    }
    cout<<"result is "<<c<<endl;
    return 0;
}