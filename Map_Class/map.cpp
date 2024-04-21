#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> customer;

                customer[100] = "vihan";
                customer[123] = "vikas";
                customer[145] = "vishal";
                customer[171] = "veena";
                customer[200] = "arati";

                map<int,string> :: iterator p = customer.begin();
                 while(p!=customer.end())
                 {
                    cout<<p->first<<"->"<<p->second<<endl;
                    p++;
                 }
                 
                cout<< customer.at(100);
                customer.insert(pair<int,string>(543,"mamta"));
                
}