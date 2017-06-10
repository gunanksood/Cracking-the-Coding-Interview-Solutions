/*
    https://www.hackerrank.com/challenges/ctci-is-binary-search-tree
*/

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
#include<limits.h>
bool function(Node* root,int min,int max)
{
    if(root==NULL)
        return true;
    if(root->data<min||root->data>max)
        return false;
    return function(root->left,min,root->data-1)&&function(root->right,root->data+1,max);
}


   bool checkBST(Node* root)
   {
     return function(root,INT_MIN,INT_MAX);
       
       
   }

