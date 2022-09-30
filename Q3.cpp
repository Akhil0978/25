#include<iostream>
using namespace std;
class factorial
{
    private :
       int fact,n;

    public :
       void setdata(int x)
       {
           n=x;
       }
       int getN()
       {
           return n;
       }
       int getfact()
       {
           return fact;
       }
       void calfact()
       {
           int i,f=1;
           if(n<=0)
           {
               fact=1;
               return;
           }
           for(i=1;i<=n;i++)
           {
               f=f*i;
           }
           fact=f;
       }
};
int main()
{
    factorial f;
    int c;
    cout<<"Enter the no . to find factorial of : ";
    cin>>c;
    f.setdata(c);
    f.calfact();
    cout<<"Factorial of "<<f.getN()<<" is "<<f.getfact()<<endl;
}
