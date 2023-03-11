/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
// #include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node *right;
};

node* add(int data){
    node* t=new node;
    t->data=data;
    t->left=NULL;
    t->right=NULL;
    return t;
}
 
 void print(node *root){
     if(root==NULL) return;
     
     print(root->left);
     cout<<root->data<<" ";
     print(root->right);
 }
 
int main()
{
    // node* root=NULL;
   node* root=add(1);
    root->left=add(2);
    root->right=add(3);
    root->left->left=add(4);
    root->left->right=add(5);
    
    print(root);
    return 0;
}
