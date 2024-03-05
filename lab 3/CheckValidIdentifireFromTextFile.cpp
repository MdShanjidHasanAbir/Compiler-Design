#include<bits/stdc++.h>
using namespace std;

bool keyWord(string user_input){
    string filename="DataType.txt";

    ifstream file(filename);

    string My_Text;

    while (getline(file, My_Text)) {

        if (My_Text.find(user_input)!=string:: npos) {
            file.close();
            return 0;
        }
    }
    /*while (getline(file, My_Text)) {

        if (user_input == My_Text) {

           file.close();
            return 0;
        }
    }*/

    file.close();
    return 1;
}


bool isValidIdentifier(string var){
    if(!keyWord(var)){
            cout << "Invalid for '" << var << "' keyword." << endl;
        return 0;
    }

    else {

    char c;
    bool f=0;
    int n=var.size();
    if((var[0]>=65&&var[0]<=90)||(var[0]>=97&&var[0]<=122)||var[0]==95){
        for(int i=1;i<n;i++){
            if((var[i]>=65 &&var[i]<=90)||(var[i]>=97 &&var[i]<=122)||var[i]==95||(var[i]>=48 &&var[i]<=57))
                f=1;
                else{ f=0;
                c=var[i];
                break;
                }
        }
        if(f)return true;
        else {
                cout<<"Invalide for number"<<c<<endl;
        return false;

    }
    }
    else{
            cout<<"invalide for "<<var[0]<<endl;
            return false;
    }
    }
}


int main(){
    char c;
    string s;
    cin>>s;
    if(isValidIdentifier(s)){
        cout<<"Input is valid";
    }
}
