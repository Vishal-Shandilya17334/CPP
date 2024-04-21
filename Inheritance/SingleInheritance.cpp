#include<iostream>
using namespace std;
class base
{
    private:
    int a,b;
    public:
    void fun(int a)
    {
        a=a;
        
    }
};
class child : public base //if you not write visibility then by default base class will be private 
{
    public:
    int ca,cb;
    void I_child(int t)
    {
        b=t;
        fun(5);
        int sum = a+b;
        
        cout << "final result is ="<< sum<<endl;
    }

};

int main()
{
    class child c1;
    c1.I_child(3);
    return 0;
}