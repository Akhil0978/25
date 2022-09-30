#include<iostream>
using namespace std;
class LargestNumber
{
    private :
       int a,b,c;

    public :
       void setdata(int m,int n,int p)
       {
           a=m;
           b=n;
           c=p;
       }
       int getlarg()
       {
           return a;
           return b;
           return c;
       }
       void calclargestno()
       {
           if(a>b  && a>c)
           {
                cout<<"Largest no is : "<<a<<endl;
           }
           else if(b>c)
           {
                cout<<"Largest no is : "<<b<<endl;
           }
           else
               cout<<"Largest no is : "<<c<<endl;
       }
};
int main()
{
   LargestNumber L1;
   int A,B,C;
   cout<<"Enter first no. : "<<endl;
   cin>>A;
   cout<<"Enter second no. : "<<endl;
   cin>>B;
   cout<<"Enter third no. : "<<endl;
   cin>>C;
   L1.setdata(A,B,C);
   L1.calclargestno();
   return 0;
}
