#include<iostream>
using namespace std;
class Complex
{
    private :
       int a,b;

    public :
       void setdata(int x, int y)
       {
          a=x;
          b=y;
       }
       void showdata()
       {
           cout<<endl<<"Real Part is : "<<a<<" "<<"Imaginary part is : "<<b<<endl<<endl;
           cout<<"Complex No is : "<<a<<" + "<<b<<"i"<<endl<<endl;
       }
};
int main()
{
    Complex c1 ,c2 ;
    int c,d ,m,n;
    cout<<"Enter real part : "<<endl;
    cin>>c;
    cout<<"Enter Imaginary part : "<<endl;
    cin>>d;
    c1.setdata(c,d);
    c1.showdata();

    cout<<"Enter real part : "<<endl;
    cin>>m;
    cout<<"Enter Imaginary part : "<<endl;
    cin>>n;
    c2.setdata(m,n);
    c2.showdata();
    return 0;
}
