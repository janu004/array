#include<bits/stdc++.h>
using namespace std;

class Complex //Writing the variables and the functions together, but cant be changed globally -> Encapsulation
{
    private:
    int r,i; //Data Abstraction
    public:
    Complex(){r=i=0;}
    Complex(int f,int k)
    {
        r=f;i=k;
    }
    void show()
    {
        cout<>a>>b>>c;
    Complex i1(a,b);
    i1.show();
    Complex i2;
    i2=i1+c; //Operator Overloading -> Polymorphism
    i2.show();
    (i1+i2).show();

}