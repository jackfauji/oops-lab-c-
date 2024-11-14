#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char ch;
    ofstream out,out1;
    out.open("source.txt");
    out<<"100 50 1000 1 10 5 20 11\n";
    out<<"graphic era university\n";
    out<<"department of computer science\n";
    out<<"object oriented programming\n";
    out.close();

    out1.open("dest.txt",ios::app);

    ifstream in,in1;
    in.open("source.txt");
    ch=in.get();
    out1<<ch;
    while(!in.eof())
    {
        cout<<ch;
        out1<<ch;
        ch=in.get();
    }
    in.close();
    out1.close();
    cout<<endl;


    in1.open("dest.txt");
    ch=in1.get();
    while(!in1.eof())
    {
        cout<<ch;
        ch=in1.get();
    }
    in1.close();
}
