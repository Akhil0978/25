#include<iostream>
using namespace std;
class Rectangle
{
    private :
        float a,b,area;

    public :

       void setdata(float x,float y)
       {
           a=x;
           b=y;
       }
       float getl()
       {
           return a;
       }
       float getb()
       {
           return b;
       }
       float getarea()
       {
           return area;
       }
       void calarea()
       {
           float A=0;
           A=a*b;
           area=A;
       }
};
int main()
{
   Rectangle r;
   float A,B;
   cout<<"Enter length : "<<endl;
   cin>>A;
   cout<<"Enter Breadth : "<<endl;
   cin>>B;
   r.setdata(A,B);
   r.calarea();
   cout<<"The area of rectangle with length "<<r.getl()<<" and breadth "<<r.getb()<<" is "<<r.getarea()<<endl;
   return 0;
}
