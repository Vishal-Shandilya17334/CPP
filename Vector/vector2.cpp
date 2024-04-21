#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={3,4,6,7};
    vector<int> &nums=v;
    cout<<nums[];
    for(int i=0;i<nums.size();i++)
    cout<<nums[i];
}