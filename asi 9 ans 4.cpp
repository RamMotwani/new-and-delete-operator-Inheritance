#include<iostream>
#include<string.h>
using namespace std;
class person
{
protected:
    int name;
    char add[100];
    char mobile[10];
};

class employee:public person
{
protected:
    int empno;
    char empname[50];
};

class manager:public employee
{
protected:
    char desig[50];
    char depart[50];
    int sal;
public:
    void enterdata()
    {
        cout<<"Enter details of Manager :"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Enter Employee no. : ";
        cin>>empno;
        fflush(stdin);
        cout<<endl;
        cout<<"Enter name : ";
        gets(empname);
        fflush(stdin);
        cout<<endl;
        cout<<"Enter address : ";
        gets(add);
        fflush(stdin);
        cout<<endl;
        cout<<"Enter phone no. : ";
        cin>>mobile;
        fflush(stdin);
        cout<<endl;
        cout<<"Enter designation : ";
        gets(desig);
        fflush(stdin);
        cout<<endl;
        cout<<"Enter Department name : ";
        gets(depart);
        fflush(stdin);
        cout<<endl;
        cout<<"Enter basic salary : ";
        cin>>sal;
        fflush(stdin);
        cout<<endl;
    }
    int checksal()
    {
        return sal;
    }
    char* salname(int x)
    {
        if(x==sal)
        {
            return empname;
        }
    }
};
int main()
{
    int i=1,l,s,n,maxu;
    cout<<"Enter how many managers you want to enter : ";
    cin>>l;
    cout<<endl;
    s=l;
    n=l;
    manager m[100];
    while(l)
    {
        m[i].enterdata();
        i++;
        l--;
    }
    maxu=m[1].checksal();
    i=1;
    while(s)
    {
        if(maxu>m[i].checksal())
        {
            cout<<"Manager with highest salary : "<<maxu<<endl;
            break;
        }
        else
        {
            maxu=m[i].checksal();
            i++;
        }
        s--;
    }
    i=1;
    while(n)
    {
        cout<<"Manager name : "<<m[i].salname(maxu)<<endl;
        break;

    }
    return 0;


}
