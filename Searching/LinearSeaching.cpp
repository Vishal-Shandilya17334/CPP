#include<iostream>
using namespace std;
int LinearSearch(int key, int list[])
{

    for(int i=1;i<=10;++i)
    {
        if(key==list[i])
        return i;
    }
    return -1;
}
int main()
{ 
    int key,list[100],n;
    cout<<"how many value you want";
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>list[i];
    }
    cout<<"enter your key ";
    cin>>key;
    cout<<"value is at index"<<" "<<LinearSearch(key,list);
}