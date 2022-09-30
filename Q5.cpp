#include<iostream>
using namespace std;
class ReverseNumber
{
    private :
       int a;
       int revnum;

    public :
        void setdata(int y)
        {
            a=y;
        }
        int getnum()
        {
           return a;
        }
        int getrev()
        {
            return revnum;
        }
        void calreverse()
        {
            int rem=0,b=0;
            while(a!=0)
            {
                rem=a%10;
                a=a/10;
                b=b*10+rem;
            }
            revnum=b;
        }
};
int main()
{
    ReverseNumber r1;
   int c;
   cout<<"Enter a no. : "<<endl;
   cin>>c;
   r1.setdata(c);
   r1.calreverse();
   cout<<"Reverse of  "<<r1.getnum()<<" is : "<<r1.getrev()<<endl;
   return 0;
}
