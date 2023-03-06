#include <bits/stdc++.h>

using namespace std;
string reverse(int s, int e , string str){
    //base case -->
    if(s>e) {
        return str;
    }

    // recursive realtion==>>
    else{
        swap(str[s],str[e]);
        s++;
        e--;
        
        string a = reverse(s,e,str);        
        return a; 
        
    }
}
int main(){
    string s = "shankar";

    


    string ans = reverse(0,s.length()-1,s);

    cout<<ans<<endl;



    return 0;
}