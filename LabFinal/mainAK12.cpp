#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<unordered_set>



using namespace std;
bool isOperator(char c)
{
    string operators="+-*/%=<>&|!:";
    return operators.find(c)!= -1;
    //!=string::npos;
}


bool isPunction(char c)
{

    string punction=".,:;(){}[]";
    return punction.find(c)!=string::npos;

}
bool isKeyword(const string & word)
{
    unordered_set<string>keywords={"string","float","return","void","cout"};
    return keywords.find(word) !=keywords.end();

}

int main ()
{
    ifstream file("input.txt");
    if (!file.is_open())
    {
        cout<<"uable open";
        return 1;

    }



    string line ,word;

    while (getline(file,line))
    {
        stringstream ss(line);
        while (ss>>word)
        {
            if(isKeyword(word))
            {
                cout<<"Keyword:"<<word<<endl;

            }
             else if(isOperator(word[0]))
            {
                cout<<"operator:"<<word<<endl;

            }
            else if(isPunction(word[0]))
            {
                cout<<"punction:"<<word<<endl;

            }
            else{

                cout<<"Variable:"<<word<<endl;
            }
        }
    }

file.close();
return 0;
}
