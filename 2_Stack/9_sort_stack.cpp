#include <bits/stdc++.h> 

void sortedInsert(stack<int> &s , int num){
	// base case -->>
	if(s.empty() || (!s.empty() && s.top()<num)){
		s.push(num);
		return ;
	}

	int n = s.top();
	s.pop();

	// recursive call --::
	sortedInsert(s,num); // recursion ke end tak jayega fir iske baad ki line
						// execute hogi 
	s.push(n);
	
}
void sortStack(stack<int> &s)
{
	// base case  -->>

	if(s.empty()){
		return ;
	}

	else{
		int num = s.top();
		s.pop();

		// recursive call-->>
		sortStack(s); // pop karne ke liye last step tak
						// pahle ye line no 15 wala step recursion ke end tak jayega
						// fir jaake line no 19 wala recursion start hoyega

		sortedInsert(s,num); // sorted order me insert karne ke liye..
	}

}