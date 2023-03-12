#include <bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    // constructor--->>>

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};


node* buildTree(node* root){
    cout<<"Enter the data: " <<endl;
    int data;
    cin>>data;

    root = new node(data);  // constructor call ho gya naye node ke liye..

    if(data== -1){   // agar node NULL hai ... -1 matlab null le rhe yaha 
        return NULL;
    }

    else{
        cout<<"Enter data for inserting in left of "<<data << endl;
        root->left = buildTree(root->left);  // yaha se function ka cin>>Enter the data call ho jayega...

        cout<<"Enter data for inserting in right of "<<data <<endl;
        root->right = buildTree(root->right);
    }


}




void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (! q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL){ // ek level complete ho chuka hai
            cout<<endl;  // line break kar diye

            if(! q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout << temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }

        }
    }
    
}

// inorder -->> L N R
void inOrder(node * root){
    // base case 
    if(root == NULL){
        return ;
    }

    else{
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void preOrder(node * root){
    // base case 
    if(root == NULL){
        return ;
    }

    else{
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}


void postOrder(node * root){
    // base case 
    if(root == NULL){
        return ;
    }

    else{

        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}





int main(){

    node* root = NULL;
    
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    levelOrderTraversal(root);

    inOrder(root);
    cout<<endl;
    
    preOrder(root);
    cout<<endl;
    
    postOrder(root);
    cout<<endl;
    
    return 0;
}