#include <bits/stdc++.h>

using namespace std;
bool LinearSearch (int a[] , int key, int size){
    // base case  ==>
    if(a[0] == key) return true;

    else if(size==0) return false;

    


    else{
        LinearSearch(a+1,key,size-1);
        
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,12};
    int size = 10;

    int key = 13;
    bool find  = LinearSearch(arr,key,size);

    if(find) cout<<"Found"<<endl;

    else cout<<"Not Found"<<endl;

    return 0;
}