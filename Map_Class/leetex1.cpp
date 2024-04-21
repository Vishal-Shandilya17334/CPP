#include<iostream>
#include<map>
#include <string>
class Solution {
public:
    int romanToInt(string s) {
        map<string,int>roman ;
                  roman["I"]=1;
                  roman["V"]=5;
                  roman["X"]=10;
                  roman["L"]=50;
                  roman["C"]=100;
                  roman["D"]=500;
                  roman["M"]=1000;
         int v = roman.at("s"); 
         return v;       
                  



        
    }
};

int main()
{
    string =v;
     Solution s;
     string v;
     v= "II";
    int x=s.romanToInt(s);
    cout<<x;
}