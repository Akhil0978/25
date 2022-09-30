#include<iostream>
using namespace std;
class Time
{
    private :
       int hr,minu,sec;

    public :
       void setdata(int x, int y,int z)
       {
          hr=x;
          minu=y;
          sec=z;
       }
       void showdata()
       {
           cout<<"Time is "<<endl<<" "<<hr<<"hr"<<":"<<minu<<"min"<<":"<<sec<<"sec"<<endl<<endl;
       }
};
int main()
{
    Time c1 ,c2 ;
    int c,d,e ,m,n,o;
    cout<<"Enter hours : "<<endl;
    cin>>c;
    cout<<"Enter Minutes : "<<endl;
    cin>>d;
    cout<<"Enter seconds : "<<endl;
    cin>>e;
    c1.setdata(c,d,e);
    c1.showdata();

    cout<<"Enter hours : "<<endl;
    cin>>m;
    cout<<"Enter Minutes : "<<endl;
    cin>>n;
    cout<<"Enter seconds : "<<endl;
    cin>>o;
    c1.setdata(m,n,o);
    c1.showdata();
    return 0;
}

