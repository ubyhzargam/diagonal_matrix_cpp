//
//  main.cpp
//  diagonal_matrix_cpp
//
//  Created by Uby H on 01/07/23.
//

#include <iostream>
using namespace std;
class Diagonal
{
    private:
        int *A;
        int n;
    public:
        Diagonal()
        {
            n=5;
        }
        Diagonal(int n)
        {
            this->n=n;
            A=new int[n];
        }
    void set(int i, int j, int x);
    int  get(int i,int j);
    void Display();
    ~Diagonal()
    {
        free(A);
    }
};
void Diagonal::set(int i,int j, int x)
{
    if(i==j)
    A[i-1]=x;
}
int Diagonal::get(int i, int j)
{
    if(i==j)
        return A[i-1];
    else
        return 0;
}
void Diagonal::Display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                cout<<A[i-1]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    Diagonal D(5);
    D.set(1,1,1);
    D.set(2,2,2);
    D.set(3,3,3);
    D.set(4,4,4);
    D.set(5,5,5);
    D.Display();
    return 0;
}
