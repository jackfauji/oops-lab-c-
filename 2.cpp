//
#include<iostream>
using namespace std;
class employ
{
    string emp_name,dept;
    int bs,emp_id;
public :
    void getinfo()
    {
        cout<<"enter base salary and empid";
        cin>>bs>>emp_id;
        cout<<"enter emp name";
        getchar();
        getline(cin,emp_name);
        cout<<"enter emp dept";
        getline(cin,dept);
    }
    void showdata()
    {
        int da=(3*bs)/100;
        int ta=(15*bs)/100;
        int hra=(25*bs)/100;
        int gs=da+hra+ta+bs;
        cout<<"NAME :"<<emp_name<<endl;
        cout<<"DEPARTMENT :"<<dept<<endl;
        cout<<"EMPLOY ID :"<<emp_id<<endl;
        cout<<"NET SALARY :"<<gs<<endl;
    }
};


int main()
{
    employ e;
    e.getinfo();
    e.showdata();
}
