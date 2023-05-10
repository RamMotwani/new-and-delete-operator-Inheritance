#include<iostream>
#include<string.h>

using namespace std;
int x;
int o=0;
int q=0;
class Employee
{
    protected:
    int emcode;
    char emname[50];

};
class fulltime:public Employee
{
protected:
    int dailyrate;
    int days;
    int fsalary;
    char statusf[10];
};
class parttime:public fulltime
{
private:
    int ar;
protected:
    int workinghour;
    int hourrate;
    int psalary;
    char statusp[10];
public:
    void setdataf()
    {
        cout<<endl;
        cout<<"Enter Employee no. : ";
        cin>>emcode;
        cout<<endl;
        cout<<"Enter Employee name : ";
        fflush(stdin);
        gets(emname);
        cout<<endl;
        cout<<"Enter status : ";
        fflush(stdin);
        gets(statusf);
        cout<<endl;
        cout<<"Enter daily rate : ";
        cin>>dailyrate;
        cout<<endl;
        cout<<"Enter work days : ";
        cin>>days;
        cout<<endl;
        cout<<"--------------------"<<endl;
    }
    void setdatap()
    {
        cout<<endl;
        cout<<"Enter Employee no. : ";
        cin>>emcode;
        cout<<endl;
        cout<<"Enter Employee name : ";
        fflush(stdin);
        gets(emname);
        fflush(stdin);
        cout<<endl;
        cout<<"Enter status : ";
        gets(statusp);
        cout<<endl;
        cout<<"Working hours : ";
        cin>>workinghour;
        cout<<endl;
        cout<<"Enter hour rate : ";
        cin>>hourrate;
        cout<<endl;
        cout<<"--------------------"<<endl;
    }
    void setsalf()
    {
        fsalary=dailyrate*days;
    }
    void setsalp()
    {
        psalary=workinghour*hourrate;
    }
    int displayf()
    {



            cout<<"Employee no. : "<<emcode<<endl;
            cout<<"Employee name : "<<emname<<endl;
            cout<<"Employee status : "<<statusf<<endl;
            cout<<"Employee salary : "<<fsalary<<endl;
            cout<<"--------------------"<<endl;


    }

    void displayp()
    {

            cout<<"Employee no. : "<<emcode<<endl;
            cout<<"Employee name : "<<emname<<endl;
            cout<<"Employee status : "<<statusp<<endl;
            cout<<"Employee salary : "<<psalary<<endl;
            cout<<"--------------------"<<endl;


    }


};
int main()
{
    parttime p[100];
    parttime j[100];
    while(1)
    {
        int i;
        cout<<"1.Enter Record"<<endl;
        cout<<"2.Display Record"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<endl;
        cout<<"--------------------"<<endl;
        cin>>i;

        switch(i)
        {
        case(1):
            {
                int l,c=1,c2=1,fp;
                cout<<"Enter how many records you want to enter : ";
                cin>>x;

                l=x;
                cout<<endl;
                while(l)
                    {
                        cout<<"Enter 1 for Full Time employee & Enter 2 for Part Time employee"<<endl;
                        cin>>fp;
                        if(fp==1)
                        {
                            o++;
                            p[c].setdataf();
                            p[c].setsalf();
                            c++;
                        }
                        if(fp==2)
                            {
                                q++;
                                j[c2].setdatap();
                                j[c2].setsalp();
                                c2++;
                            }
                            l--;
                    }
                    break;
            }

        case(2):
        {
            int l2,c3=1,c4=1;
                l2=x;
            while(l2)
            {
                while(o)
                {
                    p[c3].displayf();
                    c3++;
                    o--;
                }
                while(q)
                {
                    j[c4].displayp();
                    c4++;
                    q--;
                }
                l2--;
            }
            break;
        }
        case(3):
            exit(0);

        }
    }
}
