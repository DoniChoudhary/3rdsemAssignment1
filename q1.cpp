#include<iostream>
using namespace std;

class Matrix;

class Vector
{
private:
    int vect[3];
public:
    void getvector()
    {
        cout<<"Enter three elements for vector: ";
        for (int i = 0; i < 3; i++)
        {
            cin>>vect[i];
        }
    }
    void dispvector()
    {
        cout<<"Vector = ";
        for (int i = 0; i < 3; i++)
        {
            cout<<vect[i]<<" ";
        }
        cout<<endl;
    }
    friend void multiply( Matrix,Vector);
};

class Matrix
{
private:
    int mat[3][3];
public:
    void getmatrix();
    void dispmatrix();
    friend void multiply( Matrix,Vector);
};

void Matrix::getmatrix()
{
    cout<<"Enter 9 elements for matrix: ";
    for (int  i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
        {
            cin>>mat[i][j];
        }
     }
}

void Matrix::dispmatrix()
{
    cout<<"Matrix = \n";
    for (int  i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiply( Matrix m1,Vector v1)
{
    int multi[3]={0,0,0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi[i] += (m1.mat[i][j] * v1.vect[j]);
        }
    }
    cout<<"result = ";
        for (int i = 0; i < 3; i++)
        {
            cout<<multi[i]<<" ";
        }
    cout<<endl;
}
int main()
{
    Vector v;
    Matrix m;
    v.getvector();
    m.getmatrix();
    m.dispmatrix();
    v.dispvector();
    multiply(m,v);
    return 0;
}
