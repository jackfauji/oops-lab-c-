#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    string str;
    int i,ch=0;
    cout<<"Enter the String";
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            ch=str[i]+ch-'0';// value of 0 is 48 ---- means let str[i]=1----- ch=49+0-48 i.e 0
        }
    }
    cout<<"The sum is-: "<<ch;
}
