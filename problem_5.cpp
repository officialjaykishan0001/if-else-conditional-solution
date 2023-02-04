#include<iostream>
using namespace std;

int main()
{
    //taking operator from user 
    char o;
    cout<<"enter the operator : ";
    cin>>o;

    //taking two number from user 
    int a,b;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;

    //now using switch statement for ahead process
    switch (o)
    {
        case '+':
        cout<<"the addition is : "<<(a+b)<<endl;
        break;
        case '-':
        cout<<"the subtraction is : "<<(a-b)<<endl;
        break;
        case '*':
        cout<<"the product is : "<<(a*b)<<endl;
        break;
        case '/':
        cout<<"the quetient is : "<<(a/b)<<endl;
        break;
        default :
        cout<<"error... || please enter a valid operator..||"<<endl;
    }

    return 0;
}
/*jai jai jai bajarangbali...
this program coded by jaykishan kharwar
at
time_8:17
date_4/2/2023*/