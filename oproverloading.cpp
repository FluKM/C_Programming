//Write a c++ operator overloading program using '+' and '*' operators
#include <iostream>
using namespace std;
class complex
{
    public:
    float x;
    float y;
    public:
    complex operator + (complex c)
    {
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return(temp);
    }
    complex operator * (complex c)
    {
        complex temp2;
        temp2.x=(x*c.x)-(y*c.y);
        temp2.x=(y*c.x)-(x*c.y);
        return(temp2);
    }
    //<< >> these operators must be overloaded as a global function
    //And if we want to allow them to access private data member friend class is used
    friend istream &operator >>(istream &input,complex &t)//cin is declared or changed with input
    {
        cout<<"\nEnter the real part:";
        input>>t.x;
        cout<<"\nEnter Imaginary number:";
        input>>t.y;
    }
    friend ostream &operator <<(ostream &output,complex &t)//cout is declared or changed with output
    {
        output<<t.x<<"+"<<t.y<<"i\n";
    }
};

int main()
{
    complex c1,c2,c3,c4;
    cout<<"\nEnter the 1st number:";
    cin>>c1;
    cout<<"\nEnter the 2nd number:";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"\n The first number is:";
    cout<<c1;
    cout<<"\n The second number is:";
    cout<<c2;
    cout<<"\n The addition  is:";
    cout<<c3;
    cout<<"\n The multiplication is:";
    cout<<c4;
    return(0);
}