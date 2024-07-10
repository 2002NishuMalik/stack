#include<bits/stdtr1c++.h>

using namespace std;

class Stack
{
    int size;
    int *arr;
    int top1;
    int top2;
public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }
    void push1(int data)
    {
        if(top2-top1 == 1)
        {
            cout <<"overflow";
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if(top2-top1 == 1)
        {
            cout <<"overflow";
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop1()
    {
        if(top1 == -1)
        {
            cout <<"stack underflow";
        }
        else
        {
            top1--;
        }
    }
    void pop2()
    {
        
        if(top2 == size)
        {
            cout <<"stack underflow";
        }
        else
        {
            top2++;
        }
    }

};

int main()
{

    Stack S(15);
    S.push1(5);
    S.push1(16);
    S.push1(4);
    S.push1(3);
    S.push1(1); 
    S.pop1();
    S.push1(2);

    
    S.push2(5);
    S.push2(16);
    S.push2(4);
    S.push2(3);
    S.push2(1); 
    S.pop2();
    S.push2(2);
    return 0;


}