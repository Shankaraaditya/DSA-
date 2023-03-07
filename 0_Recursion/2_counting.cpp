#include <bits/stdc++.h>

using namespace std;


void print(int n){
    //base case -->
    if(n==0){
        return ;
    }
    // Recurence Relation -->
    else{

        cout<<n<<endl ; // 5 4 3 2 1 --->> iss case me pahle n print ho jayega ...fir recursive call me jayega (n-1 par)...
                                        // fir n-1 print hoga ... fir recursive call me jayega (n-2) par

        print(n-1);

        cout<<n <<endl; // 1 2 3 4 5  -->> iss case me pahle n recursive call me jayega (n-1) ..fir (n-2) .. fir (n-3)..
                        // fir n-n par base condition match karega aur return ho jayega aur n-(n-1) par ka cout call hoga 
                        // jo ki 1 hai ... aise he fir n-(n-2) ke baad ka cout call hoga jo ki 2 hai

    }
}
int main(){
    int n;
    cin>>n;

    print(n);
    

    return 0;
}