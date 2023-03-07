#include <bits/stdc++.h>

int fact(int n){

    // base case -->
    if(n==0){
        return 1;
    }

    // recursive relation -->

    else{
        int smallerProblem = fact(n-1) ;  // is step ko jab value aa jayegi to iske neeche ki lines call hongi...tabhi to return tak phuchega
                                            // aur next step ko values return hongi....
        int biggerProblem = n * smallerProblem ;
        return biggerProblem;
    }
   
    
}

using namespace std;
int main(){
    int n;
    cin>>n;


    int ans = fact(n);

    cout<<ans<<endl;


    return 0;
}