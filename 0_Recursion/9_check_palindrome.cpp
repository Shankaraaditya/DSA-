#include <bits/stdc++.h>

using namespace std;

bool palindrome(int s , int e , string str){
    // base case ==>>
    if(str[s] != str[e] ) return false;

    else if(s>e) return true;

    else{
        s++;
        e--;
        // palindrome(s++,e--,str);

        return palindrome(s++,e--,str);  // return krana padega na ..

        // ek case solve karo baakin recursion samhal lega.... ye chij ko serously lete hai abhi
    }
}




int main(){
    string s = "abaaaa";

    bool ans  = palindrome(0,s.length()-1,s);

    if(ans) cout << "Yess Palindrome" << endl;

    else cout << "No!! Not a Palindrome" << endl;

    return 0;
}