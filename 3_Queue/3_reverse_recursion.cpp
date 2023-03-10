//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
   // base case-->>
    int num;
   
   if(q.empty()){
     
       return q;
   }
   
   else{
       num = q.front();
       q.pop();
        // rev(q);  // aise runtime error aayega ...jo reverse ho rha wo return marega kuch... usko usi q me daalna padega
        
    //    q= rev(q);    jo reverse hoke aa raha uskko q me he to daal rhe ho... 
       q.push(num);
       return q;              
       
    //   return q;
       
   }
    
}