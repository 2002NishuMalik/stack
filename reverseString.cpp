#include<bits/stdtr1c++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "nishu";
    stack<char>s;
    for(int i = 0; i<str.length(); i++)
    {
        s.push(str[i]);
    } 

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}