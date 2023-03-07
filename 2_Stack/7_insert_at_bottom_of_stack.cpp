#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& s, int x) 
{
    
    // base case

    if(s.empty()){
        s.push(x);
        return s;
    }

    // recursive call-->>
    else{
        int popped  =  s.top();
        s.pop();
        pushAtBottom(s, x);
        s.push(popped);
        return s;
    }


}
