#include<iostream>
using namespace std;
class Area
{
    private :
        float a,b,arear,areac,areat,areap,areas;

    public :

       void setdata(float x,float y=0)
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
       float getarear()
       {
           return arear;
       }
       float getareac()
       {
           return areac;
       }
       float getareat()
       {
           return areat;
       }
       float getarearp()
       {
           return areap;
       }
       float getareas()
       {
           return areas;
       }
       void calarear()
       {
           float A=0;
           A=a*b;
           arear=A;
       }
       void calareac()
       {
           float B=0;
           B=3.14*a*a;
           areac=B;
       }
       void calareat()
       {
           float C=0;
           C=1/2*a*b;
           areat=C;
       }
       void calareap()
       {
           float D=0;
           D=a*b;
           areap=D;
       }
       void calareas()
       {
           float E=0;
           E=a*a;
           areas=E;
       }
};
int main()
{
    Area a;
    float x,y,r,b,h,B,H;
    cout<<"Enter length : "<<endl;
    cin>>x;
    cout<<"Enter breadth : "<<endl;
    cin>>y;
    a.setdata(x,y);
    a.calarear();
    cout<<"Area of rectangle with length "<<a.getl()<<" and breadth "<<a.getb()<<" is "<<a.getarear()<<endl<<endl;

    cout<<"Enter radius : "<<endl;
    cin>>r;
    a.setdata(r);
    a.calareac();
    cout<<"Area of circle "<<a.getl()<<" is "<<a.getareac()<<endl<<endl;

    cout<<"Enter base : "<<endl;
    cin>>x;
    cout<<"Enter width : "<<endl;
    cin>>y;
    a.setdata(x,y);
    a.calareat();
    cout<<"Area of paralleogram with base "<<a.getl()<<" and height "<<a.getb()<<" is "<<a.getareat()<<endl<<endl;


    cout<<"Enter base : "<<endl;
    cin>>x;
    cout<<"Enter width : "<<endl;
    cin>>y;
    a.setdata(x,y);
    a.calareap();
    cout<<"Area of triangle with base "<<a.getl()<<" and height "<<a.getb()<<" is "<<a.getarearp()<<endl<<endl;

    cout<<"Enter side : "<<endl;
    cin>>x;
    a.setdata(x);
    a.calareas();
    cout<<"Area of square "<<a.getl()<<" is "<<a.getareas()<<endl<<endl;
    return 0;
}
