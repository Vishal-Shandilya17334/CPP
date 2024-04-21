#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> customer { {"I",1},{"v",5},{"x",10},{"L",500},{"C",50},{"D",500},{"M",100} };

                /*customer["vihan"] = 23;
                customer["vikas"] = 56;
                customer["vishal"] = 55;
                customer["veena"] = 77;
                customer["arati"] = 88; */

                map<string,int> :: iterator p = customer.begin();
                  cout<<customer.at("L");
                 
               
                
}