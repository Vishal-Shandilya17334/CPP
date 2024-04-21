#include<iostream>
using namespace std;
class base {

    private:
    int a;
    int b;

    public:
    base(int m)
    {
        a=m;
       cout << " I am  a base constructor"<<a<<endl;
    }
    ~base()
    {
        cout<<"i am base destructor";
    }
    
};
class child : public base {
    private:
    int a;
    float b;
    public:
    child(int w,int x) : base(x)
    {
        
        a=w;
        cout<<"Hello guys i'm child constructor"<<a<<endl;
    }
    ~child(){
        cout<<"i am  child destructor";
    }
};


int main()
{
    child b1(5,6);
    return 0;

}
