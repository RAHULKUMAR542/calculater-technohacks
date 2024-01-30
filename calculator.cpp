#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"enter a operator:+,-,*,/:";
    cin>>op;
    cout<<"enter a two numbers";
    cin>>num1>>num2;
    switch(op){
    case '+':
    cout<<"add a two number";
    cout<<num1<<" + "<<num2<<" = "<<num1+num2;
    break;
    case '-':
    cout<<"subtract a two number";
    cout<<num1<<" - "<<num2<<" = "<<num1-num2;
    break;
    case '*':
    cout<<"multiply a two number";
    cout<<num1<<" * "<<num2<<" = "<<num1*num2;
    break;
    case '/':
    cout<<"divide a two number";
    cout<<num1<<" / "<<num2<<" = "<<num1/num2;
    break;
    default:
    cout<<"erro! operator is not correact";
    break;
    }
    return 0;

}
