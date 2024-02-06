#include<iostream>
using namespace std;


int main()
{
   string s,c;
    cin>>s;
    int n=s.size();

     char P='+';
     char ne='-';
     char m='*';
     char d='/';
     char e='=';
     char per='%';

    for(int i=0 ;i<n;i++)
    {
        if(s[i]=='+')
    {
       c+=P;

    }




        if(s[i]=='-')
    {
       c+=ne;

    }


        if(s[i]=='*')
    {
        c+=m;

    }



        if(s[i]=='/')
    {
       c+=d;

    }


        if(s[i]=='=')
    {
        c+=e;

    }


     if(s[i]=='%')
    {
        c+=per;

    }

    }

    int x=c.size();

    for (int i =0; i<x;i++)
    {
        cout<<"operator"<<i<<" :: "<< c[i]<<endl;
    }

    return 0;

}

