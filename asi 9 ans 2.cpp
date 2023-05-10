#include<iostream>
using namespace std;
class number
{
protected:
    int a,b;
public:
    void setdata()
    {
        int x,y;
        cout<<"Enter two no.s"<<endl;
        cin>>x>>y;
        a=x;
        b=y;
    }
};
class add:public number
{
    int c;
public:
    void addition()
    {
        c=a+b;
    }
    void displya()
    {
        cout<<"addition of two no.s "<<c<<endl;
    }
};
int main()
{
    add a;
    a.setdata();
    a.addition();
    a.displya();
    return 0;
}

