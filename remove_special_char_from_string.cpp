#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    string str;
    int i;
    cout<<"Enter the String";
    getline(cin,str);

    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ' || (str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            cout<<str[i];
        }
    }
}
