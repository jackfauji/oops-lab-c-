#include<iostream>
using namespace std;
class student
{

    string name,branch;
    int marks[5],rollno;
public:
    void getdata()
    {

        cout<<"enter name";
        getline(cin,name);
        cout<<"enter branch";
        getline(cin,branch);
        cout<<"enter roll no";
        cin>>rollno;
        cout<<"enter marks";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void showdata()
    {
        cout<<"NAME :"<<name<<endl;
        cout<<"BRANCH :"<<branch<<endl;
        cout<<"ROLL NO :"<<rollno<<endl;
        cout<<"MARKS :";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }
    }
};

int main()
{

    student s;
    s.getdata();
    s.showdata();
    return 0;
}
