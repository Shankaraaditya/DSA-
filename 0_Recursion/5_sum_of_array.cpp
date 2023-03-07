// 1 2 3 4 5 6 

#include <bits/stdc++.h>

using namespace std;

int sum(int a[] , int size){
    //base case -->
    if(size == 0){
        return 0;
    }
    else if(size==1){
        return a[0];
    }
    else
    {    // ek part solve karo baaki recursion se solve kra lo...
        int remainingPart = sum(a+1 , size-1);
        int ans = a[0] + remainingPart;
        return ans;
    }
    


}


int main(){
    int a[5] = {1,2,3,4,5};
    int size  = 5;

    int ans = sum(a,size);

    cout<<ans<<endl;



    return 0;
}