#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a , b"<<endl;
    cin>>a>>b;

    char op;
    cout<<"enter the operation need to be performed"<<endl;
    cin>>op;


    switch(op){
        case '*':cout<<a*b;
        break;
        case '+':cout<<a+b;
        break;
        case '-':cout<<a-b;
        break;
        case '/':cout<<a/b;
        break;
        default: cout<<"entered wrong input";
    }
}
