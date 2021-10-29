#include<iostream>
using namespace std;

int main(){
    char ch;
    int num1,num2;
    cin>>ch;
    if (ch=='X'||ch=='x'){
        return 0;
    }
    
    do
    {if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'){
        cin>>num1>>num2;
    switch (ch)
    {
    case '+':
        cout<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1/num2<<endl;
        break;
    case '%':
        cout<<num1%num2<<endl;
        break;
    case 'X':
        return 0;
        // break;
    case 'x':
        return 0;
        // break;
    default:
        cout<<"Invalid operation. Try again."<<endl;
        break;
    }}else if (ch=='X'||ch=='x'){
        return 0;
        }else{
            cout<<"Invalid operation. Try again."<<endl;
         }
        cin>>ch;
    
    } while (ch!=0);
    
    return 0;
}