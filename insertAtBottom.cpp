#include<bits/stdtr1c++.h>
#include<iostream>
using namespace std;

void solve(stack <int>&s, int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();
    solve(s, target);
    s.push(topelement);
}

void insertAtBottom(stack <int> &s)
{
    if(s.size()==0)
    {
        cout << "there is no element in stack, can't insert at bottom"<<endl;
        return;
    }
    
    int target = s.top();
    s.pop();

    solve(s, target);

    
}


int main()
{
    stack <int> S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50); 

    int totalsize = S.size();
    insertAtBottom(S);
    cout <<"Printing"<<endl;

    while(!S.empty())
    {
        cout<<S.top() << " ";
        S.pop();
    }
    cout << endl;
}