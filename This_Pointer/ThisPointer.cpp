#include<iostream>
using namespace std;
class box
   {
    private:
    int l,b,h;
    public:
    void set_value(int l,int b, int h)
    {
        this->l=l;
        this->b=b;     //without this pointer the value is "length=1968402221 hight =6422352 base =4200944"
        this->h=h;   //with this the value is "length=3 hight =5 base =5"
    }
    void get_value()
    {
        cout<<"length="<<l<<" hight ="<<h<<" base ="<<b;
    }
};

int main()
{
    box b1;
    box *p;
    p=&b1; // this is a object pointer;
    p->set_value(3,5,5);
    p->get_value();

}



/*this is a keyword
  this pointer is local caller object pointer means this pointer contain address of local caller object\
  every single instance member have a this pointer;
  this action is perform automatic not need to write anything for this pointer
  this pointer can not be modify
  it is use to refer caller object in member fuction;

note: why this pointer -> let suppose if your function parameter variable name and
your instance member variable name both are same,then problem is name conflict so if we have a this 
pointer to notify for this variable is not local variable lik----> written in above the program

*/ 
/*Example of object pointer
  meaning of object pointer is one of the variable which is contain address of class object 
ex---\
   class box
   {
    private:
    int l,b,h;
    public:
    void set_value(int a,int b, int c)
    {
        l=a;
        b=b;
        c=h;
    }
    void get_value()
    {
        cout<<"length "<<l<<"hight"<<h<<"base"<<b;
    }
};

int main()
{
    box b1;
    box *p;
    p=&b1; // this is a object pointer;
    p->set_value(3,5,5);
    p->get_value();

}
   

*/