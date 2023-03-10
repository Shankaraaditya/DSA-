#include <bits/stdc++.h>

using namespace std;
int main(){
    string str = "aditya";

    stack<char> s;
    string ans="";
    
    for(int i=0 ; i<str.length() ; i++){
        s.push(str[i]);
    }

    for (int i = 0; i < str.length(); i++)
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout<<"reversed string is --> "<<ans<<endl;  // aytida 
    


    return 0;
}