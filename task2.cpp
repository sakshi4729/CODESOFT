#include<iostream>
using namespace std;
int main(){
    cout<<"1.Addition: +"<<endl;
    cout<<"2.Subtraction: -"<<endl;
    cout<<"3.Multiplication: *"<<endl;
    cout<<"4.Division: /"<<endl;
    float x,y;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    char operation;
    cout<<"Arithmetic Operations: +,-,*,/"<<endl;
    cout<<"Enter operation:";
    cin>>operation;
    float result;
    switch(operation){
        case '+':
            result=x+y;
            cout<<x<<"+"<<y<<"="<<result<<endl;
            break;
        case '-':
            result=x-y;
            cout<<x<<"-"<<y<<"="<<result<<endl;
            break;
        case '*':
            result=x*y;
            cout<<x<<"*"<<y<<"="<<result<<endl;
            break;
        case '/':
            if(y!=0){
                result=x/y;
                cout<<x<<"/"<<y<<"="<<result<<endl;
            }
            else{
                cout<<"Error!! Division by Zero"<<endl;
            }
            break;
        default:
            cout<<"Invalid operation!! Please enter valid operation"<<endl;
            break;
    }
    return 0;
}
