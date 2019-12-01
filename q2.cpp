#include<iostream>
using namespace std;

long hrs_to_secs(int hrs,int mins, int secs)
{
    return ((hrs * 60) + mins)* 60 + secs;
}

int main()
{
    int hrs,mins,secs,total=0;
    char choice ='y';
    do
    {
        cout<<"Enter hrs = ";cin>>hrs;
        cout<<"Enter mins= ";cin>>mins;
        cout<<"Enter secs= ";cin>>secs;
        total += hrs_to_secs(hrs,mins,secs);
        cout<<"Do you want to add more(y/n): ";cin>>choice;
    } while (choice == 'y'|| choice == 'Y');
    cout<<"Total = "<<total<<" sec ";
    return 0;
}