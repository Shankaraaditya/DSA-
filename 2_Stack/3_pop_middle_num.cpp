#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int count , int size){
    // base case---> jab middle element tak pahuch gaye tab kya karna hai
    if(count  == size/2){
        inputStack.pop();
        return ;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    // recursive call--->>
    solve(inputStack , count+1 , size);
    inputStack.push(num);
    
}



void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int count =0;
    solve (inputStack , count  , N);
    
   
}