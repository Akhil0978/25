#include<iostream>
using namespace std;
class Circle
{
    private :
        float a,area;

    public :

       void setdata(float x)
       {
           a=x;
       }
       float getr()
       {
           return a;
       }
       float getarea()
       {
           return area;
       }
       void calarea()
       {
           float A=0;
           A=3.14*a*a;
           area=A;
       }
};
int main()
{
   Circle c;
   float A;
   cout<<"Enter redius : "<<endl;
   cin>>A;

   c.setdata(A);
   c.calarea();
   cout<<"The area of circle with redius "<<c.getr()<<" is "<<c.getarea()<<endl;
   return 0;
}
