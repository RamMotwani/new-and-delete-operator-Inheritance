#include<iostream>
using namespace std;
class item
{
protected:
    int no;
    char name[50];
    int price;
public:
    void setitem()
    {
        cout<<"----------------------------"<<endl;
        cout<<"Enter item name : ";
        fflush(stdin);
        gets(name);
        cout<<endl;
        cout<<"Enter item no. : ";
        cin>>no;
        cout<<endl;
        cout<<"Enter item price : ";
        cin>>price;
        cout<<endl;
    }
};

class discount:public item
{
protected:
    int d;
    int dp;
public:
    void setdiscount()
    {
        cout<<"Enter discount percentage : ";
        cin>>d;
        cout<<endl;
        cout<<"----------------------------"<<endl;
    }
    int total()
    {
        return price;

    }
    void discountprice()
    {
        dp=price-(price*d/100);
    }
    int totaldiscount()
    {
        return dp;
    }
    void display()
    {
        cout<<endl;
        cout<<"Item name : "<<name<<endl;
        cout<<"Item no. : "<<no<<endl;
        cout<<"Item price : "<<price<<endl;
        cout<<"Discount percent : "<<d<<endl;
        cout<<"Discounted price : "<<dp<<endl;
        cout<<"----------------------------"<<endl;
    }
};
int main()
{
    int i=0,l1,l2,l3,add=0,dis=0;
    cout<<"Enter how many items you want to enter : ";
    cin>>l1;
    cout<<endl;
    l2=l1;
    l3=l1;
    discount item[100];
    while(l1)
    {
        item[i].setitem();
        item[i].setdiscount();
        i++;
        l1--;
    }
    i=0;
    while(l2)
    {
        item[i].discountprice();
        item[i].display();
        i++;
        l2--;
    }
    i=0;
    while(l3)
    {
        add=item[i].total()+add;
        dis=item[i].totaldiscount()+dis;
        i++;
        l3--;
    }
    cout<<"Total price : "<<add<<endl<<"Total discount : "<<add-dis<<endl;

}
