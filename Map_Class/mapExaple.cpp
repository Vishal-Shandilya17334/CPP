#include<iostream>
#include<map>
using namespace std;
int main()
{


    map<string,int>c= {{"vishal",4},{"vikas",3}};
    map<string,int>::iterator p=c.begin();
    cout<<p->first<<p->second;
    cout<<c.at("vishal");
    return 0;
}
