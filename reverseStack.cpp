#include<bits/stdtr1c++.h>
#include<iostream>
using namespace std;

void insertAtBottom(stack <int> &s, int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();
    insertAtBottom(s, target);
    s.push(topelement);
    
}

void reverseStack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, target);
}

int main()
{
    stack <int> S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50); 

   reverseStack(S);

   cout <<"Printing after reverse"<<endl;

    while(!S.empty())
    {
        cout<<S.top() << " ";
        S.pop();
    }
   return 0;
}