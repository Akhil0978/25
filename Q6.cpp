#include<iostream>
using namespace std;
class square
{
    private :
       int a;
       int sqnum;
       static int count;
    public :
        void setdata(int x)
        {
            a=x;
        }
        int getdata()
        {
            return a;
        }
        int getsq()
        {
            return sqnum;
        }
        void calsq()
        {
            int b;
            b=a*a;
            sqnum=b;
            count ++;
        }
        int getcount()
        {
           return count;
        }
};
int square ::count=0;
int main()
{
    square s;
    int c;
    cout<<"Enter a no. : "<<endl;
    cin>>c;
    s.setdata(c);
    s.calsq();
    cout<<"Square of "<<s.getdata()<<" is : "<<s.getsq()<<endl;
    cout<<"The function is called : "<<s.getcount()<<" time"<<endl;
    return 0;
}
