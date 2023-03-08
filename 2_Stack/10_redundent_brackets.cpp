#include <bits/stdc++.h> 

bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> stk ; 
    
    for(int i = 0 ; i<s.length() ; i++){
        char ch = s[i];

        bool isRedundent = true; // redundent hai..?? 
       

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            stk.push(ch);
        }

       
        else{
            if(ch == ')'){

                // jabtak stack ke top pe opening bracket nahi mil rha tbtk udaate jao
                // lekin ek baat ka dhyan rkhna --->> agar opening bracket milne 
                // se pahle tmko koi operator mil gaya , to ek baat to clear hai ki
                // wo wala bracket redundent nahi hoga..
                while(stk.top()!= '('){
                    char top = stk.top();

                    if(top == '+' || top == '-'|| top == '*' || top == '/'){
                        isRedundent = false;

                    }

                    stk.pop();

                }

                if(isRedundent == true)
                    return true;

                stk.pop();  // opening bracket bhi ud gaya.
                
                
                

            }

        }

        
    }
   
    // return false; // ye bhi chal jayega
   if(!stk.empty()) return false;  // agar redundent hai to last me kuch to back jayega stack me

    
   
}
