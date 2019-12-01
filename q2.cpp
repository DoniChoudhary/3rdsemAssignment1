#include<iostream>
using namespace std;

class Least
{
private:
    int a,b,c;
public:
    Least(int n1,int n2, int n3)
    {
        this->a =n1;
        this->b =n2;
        this->c =n3;
    }
    int least()
    {
        int temp = this->a < this->b ? (this->a < this->c ? this->a : this->c) : (this->b < this->c ? this->b : this->c);
        
        return temp;
    }
};



int main()
{
    int Subject1,Subject2,Subject3,least;
    cout<<"Enter Marks of English: ";
    cin>>Subject1;
    cout<<"Enter Marks of C++: ";
    cin>>Subject2;
    cout<<"Enter Marks of Maths: ";
    cin>>Subject3;
    Least less(Subject1,Subject2,Subject3);
    least=less.least();
    cout<<"Least = "<<least<<endl;
    if (least==Subject1&&least==Subject2&&least==Subject3)
    {
         cout<<"You Scored least in all subjects"<<endl;
    }else if (least==Subject1)
    {
        cout<<"You Scored least in English"<<endl;
    }else if (least==Subject2)
    {
        cout<<"You Scored least in C++"<<endl;
    }else if (least==Subject3)
    {
        cout<<"You Scored least in Maths"<<endl;
    }
    return 0;
}