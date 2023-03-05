// FIBONACCI SERIES 

// 0 1 1 2 3 5 8 13 21 .....

// 

#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
    // base case -->
    if(n==1){
        return 0;
    }
    else if( n==2){
        return 1;
    }

    // recursive relation
    else{
        
        int x = fibo(n-1) + fibo(n-2);  // recursive realation
        return x;
  
    }
}


int main(){
    
    int n;
    cin>>n;

    int ans = fibo(n);
    cout<<ans<<endl;
    return 0;
}

