#include <bits/stdc++.h>

using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(3);
    q.push(1);

    cout<<"Size of the Queue is-->> "<<q.size()<<endl;

    cout<<"Front of the Queue is-->> "<<q.front()<<endl;


    cout<<"Rear of the Queue is-->> "<<q.back()<<endl;

    q.pop();

    cout<<"empty or not "<<q.empty()<<endl;

    cout<<q.front()<<endl;

    return 0;
}