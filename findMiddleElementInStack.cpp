#include<bits/stdtr1c++.h>
#include<iostream>
using namespace std;

void printMiddlElement(stack <int> &s, int &totalsize)
{
    if(s.size()==0)
    {
        cout << "there is no element in stack"<<endl;
    }
    if(s.size() == totalsize/2 + 1)
    {
        cout << "middle element :" << s.top() << endl;
        return;
    }

    int temp = s.top();
    s.pop();

    printMiddlElement(s, totalsize);

    s.push(temp);
}


int main()
{
    stack <int> S;
    S.push(5);
    S.push(6);
    S.push(4);
    S.push(3);
    S.push(1); 

    int totalsize = S.size();
    printMiddlElement(S, totalsize);
}