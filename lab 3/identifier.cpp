#include<iostream>
using namespace std;


int main ()
{
    string s;
    getline(cin,s);

    cout<<s<<endl;
    int a;


    for (int i=0; i<s.size();i++)
    {

        if (s[i-1]==' ' &&(s[i]>=97 && s[i]<=122||s[i]==95 || s[i]>=65 && s[i]<=90  ))
        {


        a=i;
        cout<<s.substr(i)<<endl;
        break;
        }

    }
cout<< a<<endl ;

if (s[a]==95 || s[a]>=65 && s[a]<=90 || s[a]>=95 && s[a]<=122 )
{
    if (s[a+1]==95 || s[a+1]>=65 && s[a+1]<=90 || s[a+1]>=95 && s[a+1]<=122)
    {
        cout << "right"<<endl;
    }
    else
    {
        cout<<"wrong "<<endl;
    }
}
else {
    cout<<"wrong"<<endl;
}
cout <<s[a+1];
   return 0;

}
