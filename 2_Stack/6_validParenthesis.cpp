#include <bits/stdc++.h>

using namespace std;

bool valid(string s){
    stack<char> stk ;

    stk.top()=0;



    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            char ch = s[i];
            stk.push(ch);
        }
        else{
            char k = s[i];
            char l = stk.top();

            if((k==')' && l=='(') || (k=='}' && l=='{') || (k==']' && l=='[') ){
                stk.pop();
            }
        } 

    
    }

    if( stk.empty() ) return true;
    else return false;
    
}

int main(){
    string s = "[{()}]" ;

    bool ans  = valid(s);

    if(ans) cout<<"Valid Parenthesis"<<endl;

    else cout<<"Not a Valid Parenthesis!!"<<endl; 

    return 0;
}

