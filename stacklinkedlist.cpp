#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Stack
{ 
    Node* top;
    int size;
    
   
    public:
    Stack()
    {
        size = 0;
        top = NULL; 
        
    }
//PUSH
    void push(int value)
    {
        Node* temp = new Node(value);
        if(temp==nullptr)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        temp->next = top;
        top = temp;
        size++;
        cout<<"pushed "<<value<<" into the stack\n";
    }
    //POP
    void pop()
    {
       if(top==nullptr)
        {
            cout<<"stack underflow"<<endl;
            return;
        } 
        else{
            Node* temp = top;
            cout<<"popped "<<top->data<<" from the stack\n";
            top= top->next;
            delete temp;
            size--;
        }
    }
    //PEEK
    int peek()
    {
        if(top==nullptr)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        } 
        else
        {
            return top->data;
        }
    }
    //EMPTY
    bool isempty()
    {
        return top==nullptr;
    }
    //SIZE
    int issize()
    {
        return size;
    }
};
int main()
{
    Stack S;
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