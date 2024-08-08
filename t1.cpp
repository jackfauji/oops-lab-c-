//wap in c++ to capitalise 1st letter of each word in a string.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int i=0;
    str[i]=str[i]-32;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i+1]=str[i+1]-32;
        }
        i++;
    }
    cout<<str<<endl;
}
