#include<bits/stdc++.h>
using namespace std;

class BTnode{

public:
int val;
BTnode *right;
BTnode *left;
 
 BTnode(int val){
    val = val;
    right =NULL;
    left =NULL;
 }
};

void print(BTnode*root){
  if(root==NULL){
   return;
  }

  cout<<root->val<<": ";
  if(root->left){
    cout<<root->left->val<<".";
  }
  if(root->right){
    cout<<root->right->val<<" ";
  }
  cout<<endl;
  print(root->left);
  print(root->right);

  return;

}
BTnode* del(BTnode*root,int target){
  if(root==NULL)return root;
   if(root -> val == target){
    if(root->left){
     root->val = root->left->val;
     root->left = del(root->left,root->left->val);
      
      }else if(root->right){
         root->val = root->right->val;
         root->right = del(root->right, root->right->val);

         }else{
          return NULL;
         }

   }
  return root;
}

int main(){
    
    //BTnode*nroot = del(root,1);
   // print(nroot);
    return 0;
}