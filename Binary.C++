#include <iostream>
#include<iomanip>


using namespace std;


class demo
{
    int a,b;
    public:demo()
    {
        a=0;
        b=0;
    }
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<b<<endl;
    }
    void operator +(demo &kss)
    {
        demo temp;
        temp.a=a+kss.a;
        temp.b=b+kss.b;
        return temp;
    }
};
int main()
{
    demo ob1(10,20);
    demo ob2(20,30);
    demo ob;
    ob=ob1+ob2;
    ob.show();
    return 0;
}
