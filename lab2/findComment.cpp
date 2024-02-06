#include<iostream>
using namespace std;


int main()
{
   string s;
   cin>>s;
    int n=s.size();
    bool y= true;

for (int i=0;i<n; i++)
{
    if (s[i]=='*')
    {
        y=false;
    }

}

if (y==true  )
{
    cout<<"single line comment ";

}
else {

    cout <<"multiple line comment";
}
    return 0;
    }
