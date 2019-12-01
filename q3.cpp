#include<iostream>
using namespace std;

class Number
{
private:
    int a,b;
public:
    Number(int n1, int n2):a(n1),b(n2){}
    void Display() const
    {
        cout<<"a = "<<a<<endl
            <<"b = "<<b<<endl;
    }
    friend void swap(Number&);
};

void swap(Number& n)
{
    int temp = n.a;
    n.a= n.b;
    n.b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter 2 nos: ";cin>>a>>b;
    cout<<"Before swapping "<<endl;
    Number num(a,b);
    num.Display();
    cout<<"After swapping "<<endl;
    swap(num);
    num.Display();
    return 0;
}