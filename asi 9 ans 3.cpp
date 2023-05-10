#include<iostream>
using namespace std;
class Subject
{
protected:
    int maths,physics,chemistry;
public:
    void setmarks()
    {
        cout<<"Enter Marks :"<<endl;
        cout<<"Maths : ";
        cin>>maths;
        cout<<endl<<"Physics : ";
        cin>>physics;
        cout<<endl<<"Chemistry : ";
        cin>>chemistry;
    }
};

class total_marks:public Subject
{
protected:
    int t;
public:
    void total()
    {
        t=maths+physics+chemistry;
    }
    void displaymarks()
    {
        cout<<endl<<"Your total marks : "<<t<<endl;
    }
};

class percentage:public total_marks
{
    float p;
    int maximum=360;
public:
    void percent()
    {
        p=t*100/maximum;
    }
    void displypercent()
    {
        cout<<"Your Percentage : "<<p<<"%"<<endl;
    }
};
int main()
{
    percentage ram;
    ram.setmarks();
    ram.total();
    ram.displaymarks();
    ram.percent();
    ram.displypercent();
    return 0;
}
