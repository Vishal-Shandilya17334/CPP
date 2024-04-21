#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<string,int> Roman { {"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000} };
        map<string,int> :: iterator p = Roman .begin();
        cout<<"YOUR ROMAN IS "<<s<<"="<<Roman.at(s);
        
        
        
    }
};

int main()
{
    Solution s;
    s.romanToInt("VI");
    

    return 0;
}