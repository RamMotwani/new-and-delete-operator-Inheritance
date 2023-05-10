#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[100];
    int age;
public:
    void setname(char *str)
    {
        strcpy(name,str);
    }
    void setage(int x)
    {
        age=x;
    }
    void displayname()
    {
        cout<<"Name is "<<name<<endl;
    }
    void displayage()
    {
        cout<<"Age is "<<age<<endl;
    }
};

class Employee:public Person
{
    int empid;
    float salary;
public:
    void setempid(int a)
    {
        empid=a;
    }
    void setsalary(float b)
    {
        salary=b;
    }
    void displayempid()
    {
        cout<<"Employee id : "<<empid<<endl;
    }
    void displaysalary()
    {
        cout<<"Salary : "<<salary<<endl;
    }
};
int main()
{
    Employee e1;
    e1.setname("Dev nagar");
    e1.setage(26);
    e1.setempid(1021);
    e1.setsalary(35000);
    e1.displayname();
    e1.displayage();
    e1.displayempid();
    e1.displaysalary();
    return 0;

}
