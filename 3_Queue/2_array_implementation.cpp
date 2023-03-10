#include <bits/stdc++.h>

using namespace std;

class Queue
{
private:
    int * arr;
    int front;
    int back;
    int size;
    
public:
   Queue(int size){
    this->size = size;
    arr = new int[size];
    front = 0;
    back = 0;

   }

// insert an element in queue--->>
   void enqueue(int data){
    if(back ==  size){
        cout<<"Queue is Full"<<endl;
    }
    else{
        arr[back] =data;
        back++;
    }


   }


// pop an element ---

    int pop(){
        if(front == back){
            return -1;
        }

        else{
             arr[front] = -1;
             front++;

            //  maan lo queue me 2 element hai aur pahla pop kar diye ...
            // to ek place pahla wala hamesa khali rahega ..
            // isilie dono zero zero pe kar de rhe ....
             if(front ==  back){
                front = 0;
                back = 0;
             }
        }
    }

    
};






int main(){
    
    return 0;
}