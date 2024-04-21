#include<iostream>
#include<list>
using namespace std;
 
 int main(){

    list <int> l1 {12,34,87,11,22,33,44};
    list <int>:: iterator ptr;
     ptr = l1.begin();
    /*
    list <string> l2 {"india","usa","mera_ghr"};
    l2.push_back("Mamta");
    l2.push_front("vishal");
    // l2.pop_back(); l2.pop_front()   //  we can use as per our need;

    //cout<<l1[0] here this operator "[]" is not  working
    list <int>:: iterator ptr;
    list <string>:: iterator ptr2;
    ptr = l1.begin();
     ptr2 = l2.begin();
    while(ptr!=l1.end())
    {
        cout<<*ptr<<endl;
        ptr++;
    }
     while(ptr2!=l2.end())
     {
        cout<<*ptr2<<" ";
        ptr2++;
     }         
     */
     while(ptr!=l1.end())
    {
        cout<<*ptr<<" ";
        ptr++;
            cout<<endl;

    }
    cout<<endl;
    list <int>:: iterator Q;
    Q=l1.begin();
    
   // l1.sort();  //short the number simply;
     // l1.reverse();  //simply reverse the no;
     // l1.remove(11);  // you can remove particular no; // if you 
     // 
     l1.clear();
    
    while(Q!=l1.end())
    {
        cout<<*Q<<" ";
        Q++;
    }

    

    



    

 }
