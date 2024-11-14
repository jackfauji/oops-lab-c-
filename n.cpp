
//que,consider a text  file conatining some dogits ands some string in following order
//digits--  100 50 1000 1 10 5 20 11
and string "graphic era university
department of computer science
object oriented programming"
//implement uisng file handlng a cpp program to write the following text in a file source.txt that i s presemt at some directory .read he contents of thus file and display it in the console that is ram
//.again write the contenets of this file that is source.txt to another file in dest.txt provided des.txt must contain some predefined text .

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
