#include <bits/stdc++.h>

using namespace std;

bool check(int *a , int s){

    // base condition --->>>>
    if(s==0 || s==1) return true;

    if(a[0] > a[1]) return false;
    

    // Recursive Call -->>> 
    else{
        bool remainingPart = check(a+1 , s-1);
        return remainingPart;
    }

}

int main(){
    int arr[5] ={1,2,3,19,19};
    int size = 5;

    bool ans = check(arr,size);

    if(ans) cout<<"SORTED"<<endl;
    else cout<<"NOT SORTED"<<endl;

    return 0;
}