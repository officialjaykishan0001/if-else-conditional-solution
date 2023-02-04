#include<iostream>
using namespace std;

int main()
{
    //taking mark of the students
    int mark;
    cout<<"enter the marks : ";
    cin>>mark;

    if(mark<=30)
    {
        cout<<"F";

    }
    else if(mark<=40)
    {
        cout<<"E";
    }
    else if (mark<=50)
    {
        cout<<"D";
    }
    else if (mark<=60)
    {
        cout<<"C";
    }
    else if(mark<=70)
    {
        cout<<"B";
    }
    else if (mark<=80)
    {
        cout<<"B+";
    }
    else if (mark<=90)
    {
        cout<<"A";
    }
    else if(mark<=100)
    {
        cout<<"A+";
    }
    else{
        cout<<"please enter a valid marks";
    }
    cout<<endl;
    return 0;
}
/*jai jai jai bajarangbali..
this program coded by jaykishan kharwar
at
time_8:29
date_4/2/2023*/