#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
   /* vector<int>v1 {3,5,6};
   vector<char> vc(5);
    vector<int> v3(5,10);// 10 will assign for each block
    vector<string> vs(3,"vishal");// ther are three block to able take three string now as vishal
    cout<<vs[0]<<endl;
      cout<<vs[1]<<endl;
        cout<<vs[2]<<endl;
        for(int i=0;i<=4;i++)
          cout<<v3[i]<<endl;
      */  
     /*
     vector<int> v1;
     cout<<"current capacity is "<<v1.capacity()<<endl;// capacity is zero with this initilazation
     v1.push_back(10);
     cout<<"current capacity is "<<v1.capacity()<<endl;
     v1.push_back(20);
     cout<<"current capacity is "<<v1.capacity()<<endl; // capacity does increase double 
     v1.push_back(30);
     cout<<"current capacity is "<<v1.capacity()<<endl;
     cout<<"what is the current size of vector"<<v1.size()<<endl;//this this showing size not capacity some case the capacity  large but size less
     */

    /*vector<int> v1;
    int i;\
    for( i=0 ; i<=9;i++)
    v1.push_back(i*10);
    cout<<"capacity of vector is "<<v1.capacity()<<endl;
    cout<<"Size-+ of vector is "<<v1.size()<<endl;
    for( i=0 ; i<=9;i++)
    cout<<"element of vector is "<<v1[i]<<endl;
    cout<<"value at index 4th is ="<<v1.at(4)<<endl;
    v1.clear();
    cout<<"capacity of vector is "<<v1.capacity()<<endl;
    cout<<"Size of vector is "<<v1.size()<<endl;
    */
    
    vector<int> v1{10,47,40,34,67};
    for(int i=0;i<=v1.size()-1;i++)
    cout<<v1[i]<<endl;
    cout<<"after iterator"<<endl<<endl;
    vector<int>:: iterator it=v1.begin();
    cout<<"return begin() functon"<<*(v1.begin())<<endl;
    v1.insert(it+1,123);
    for(int i=0;i<=4;i++)
    cout<<v1[i]<<endl;

    cout<<"the fist element is"<<v1.front()<<endl;
    cout<<"the last element of the vector is ="<<v1.back()<<endl;
      
  /*
     vector<int> v={2,5,6,7};
     vector<int>::iterator ptr;
     cout<<"the list of vector is ";
     for(ptr = v.begin(); ptr < v.end();ptr++)
     cout<<*ptr;
    
      */
}  
