#include<iostream>
using namespace std;
class bank
{
    string name,type;
    int accno,bal;
public:
    void details()
    {

        cout<<"enter name";
        getline(cin,name);
        cout<<"account type";
        getline(cin,type);
        cout<<"enter acc no.";
        cin>>accno;
        cout<<"enter balance";
        cin>>bal;
    }
    void add()
    {
        int x;
        cout<<"enter amt  to deposit:";
        cin>>x;
        bal=bal+x;
        cout<<"balance amt is :"<<bal<<endl;
    }
    void withdraw()
    {
        int y;
        cout<<"enter amt to withdraw";
        cin>>y;
        if((bal-y)>=1000)
        {
            bal=bal-y;
        }
        cout<<"balance amt is ;"<<bal<<endl;
    }
    void display()
    {
        cout<<"name :"<<name<<endl;
        cout<<"type :"<<type<<endl;
        cout<<"acc no :"<<accno<<endl;
        cout<<"balance :"<<bal<<endl;
    }
};


int main()
{
    bank b;
    b.details();
    b.add();
    b.withdraw();
    b.display();
    b.details();
    b.display();

}
