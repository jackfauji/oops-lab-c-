//wap in c++to calculate sum of all numbers present in a string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string";
    getline(cin,str);
    int i=0,sum=0;
    while(str[i]!='\0')
    {
        if(isdigit(str[i]))     //if(str[i]>=48 && str[i]<=57)
        {
            sum=sum+str[i]-'0';     //By subtracting the ASCII value of '0' (which is 48) from this value, you get the actual integer value represented by that character. So, 53 - 48 equals 5.
        }
        i++;
    }
    cout<<"sum is "<<sum<<endl;
}
