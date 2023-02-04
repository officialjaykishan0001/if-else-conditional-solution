#include<iostream>
using namespace std;

int main()
{
    int cp,sp;
    cout<<"enter the cp : ";
    cin>>cp;
    cout<<"enter the sp : ";
    cin>>sp;

    if(sp-cp > 0)
    {
        cout<<"you gained profit ";
        cout<<endl;
        cout<<"the profit is : "<<(sp-cp)<<endl;
        return 0;
    }
    if(sp-cp < 0){

        cout<<"you gained loss";
        
        cout<<endl;
        cout<<"the loss is : "<<(cp-sp)<<endl;
        return 0;

    }
    else{
        cout<<"both are equal ..";
        cout<<endl;
        return 0;
    }
}
/*jai jai jai bajarangbali...
this program coded by jaykishan kharwar
at
time_7:38
date_4/2/2023*/