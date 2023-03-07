void insertAtBottom(stack<int> &s , int element){
    //base case -->
    if(s.empty()){
        s.push(element);
        return ;

    }
    // recursive call
    else{
        int k = s.top();
        s.pop();
        insertAtBottom(s, element);
        s.push(k);

    }

}



void reverseStack(stack<int> &stack) {
    // Write your code here

    //base case-->>
    if(stack.empty()){
        // stack.push
        return;
    }

    int num = stack.top(); //stack ke top ko kahi store kr liya
    stack.pop(); // pop kar diya top ko...
    
    // ab baaki ka stack reverse karne ke liye racursion ko de dege
    // aur reverse hone ke aane ke baad top ko bottom me add kar dege

    reverseStack(stack);
    insertAtBottom(stack,num);
    // stack.push(num);    


}