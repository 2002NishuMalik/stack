#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack
{ 
    int *arr;
    int size;
    int top;
    bool flag;
    public:
    Stack(int s)
    {
        this->size = s;
        top = -1; 
        arr = new int[s];
        flag = 1;
    }
    //push
    void push(int val)
    {
        if(top==size-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=val;
            cout<<"pushed " <<val <<" into the stack\n";
            flag = 0;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            top--;
            cout<<"popped " <<arr[top+1] <<" from the stack\n";
            if(top==-1)
            {
                flag = 1; 
            }
        }
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"stack empty"<<endl;
            return -1;
        }
        else{
           return arr[top];
        }
    }
    bool isempty()
    {
        return top==-1;
    }
    int issize()
    {
        return top+1;
    }
};

int main()
{
    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(4);
    S.push(3);
    S.push(1); 
    S.pop();
    S.push(2);
    cout<<S.peek()<<endl;
    cout<<S.isempty()<<endl;
    cout<<S.issize()<<endl;
    return 0;
}
