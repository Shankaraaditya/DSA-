#include <bits/stdc++.h>

using namespace std;

class Stack
{
    // properties-->>
public:
    int *arr;
    int top;
    int size;

    // constructor--->>>

    Stack(int s)
    {
        this->size = s;
        arr = new int[s];
        top = -1;
    }

    void push(int element){
        if (size - top >1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout<< "stack overflow"<<endl;
        }
        
    }

    void pop(){
        if(top >= 0 ){
            top--;
        }
        else
        {
            cout<<"stack underflow"<<endl;
        }
        
    }

    int peek(){
        if (top >= 0 )
        {
            cout<< "top of stack is "<<arr[top]<<endl;
            return arr[top];
        }
        else
        {
            cout<<"stack is empty"<<endl;
            return -1;

        }

    }


    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }
        else{
            return false;

        }
        
    }


};

int main()
{

    Stack s1(4);

    s1.push(3);
    s1.push(5);
    s1.push(7);
    
    s1.pop();
    s1.peek();

    s1.push(1);

    s1.peek();




















    // stack<int> s;

    // s.push(3);
    // s.push(7);
    // s.push(10);
    // s.push(12);

    // cout << "top of stack is " << s.top() << endl;
    // cout << "size of stack is " << s.size() << endl;
    // s.pop();
    // s.pop();
    // s.pop();

    // cout << "top of stack is " << s.top() << endl;

    // s.pop();

    // if (s.empty())
    // {
    //     cout << "khali hai!!" << endl;
    // }
    // else
    // {
    //     cout << "kuch to hai andar" << endl;
    // }

    return 0;
}