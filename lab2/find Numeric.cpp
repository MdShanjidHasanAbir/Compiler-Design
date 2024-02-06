#include<iostream>
using namespace std;


int main()
{
    char str[10];
    cin>>str;
    bool y=true;

    for(int i=0 ;i<10;i++)
    {
        if(str[i]>=48 && str[i]<=57 )
    {
       y=false;
    }

    }

    if (y== false )
    {
        cout<<"numeric constant";
    }
    else
    {
        cout<<"not numeric";
    }



    return 0;

}
