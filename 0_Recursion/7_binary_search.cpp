#include <bits/stdc++.h>

using namespace std;

bool binarySearch (int *arr , int s , int e , int k ){
    // base case ==>
    // element not found ka base case 
    if(s>e) return false ;

    // element found ka base case 

    int mid  = s + (e-s)/2 ;
    if(arr[mid]==k) return true ;

    // recursive relation -->
    else{
        if(arr[mid]<k){
            return binarySearch(arr , mid+1 , e ,k);
        }
        else{
            return binarySearch(arr , s , mid-1 , k);
        }
    }


}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,12};
    int size = 10;

    int key = 13;

    int ans = binarySearch(arr , 0 , 10 , 1);

    if(ans) cout<<"Element Found"<<endl;
    else cout<<"Element Not Found"<<endl;

   

    return 0;
}