#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *createnode(int val){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->left=temp->right=NULL;
return temp;
}
struct node *insert(struct node *root,int val){
if(root==NULL){
return createnode(val);
}
if(val<root->data){
root->left=insert(root->left,val);
}
else if(val>root->data){
root->right=insert(root->right,val);
}
return root;
}
void inorder(struct node *root){
if(root!=NULL){
inorder(root->left);
printf("%d: ",root->data);
inorder(root->right);
}}
void preorder(struct node *root){
if(root!=NULL){
printf("%d: ",root->data);
preorder(root->left);
preorder(root->right);
}}
void postorder(struct node *root){
if(root!=NULL){
postorder(root->left);
postorder(root->right);
printf("%d: ",root->data);
}}
struct node *minval(struct node *root){
struct node *current=root;
while(current && current->left!=NULL){
current=current->left;
}
return current;
}
struct node *deletebst(struct node *root,int val){
struct node *temp;
if(root==NULL){
return root;
}
if(val<root->data){
root->left=deletebst(root->left,val);
}
else if(val>root->data){
root->right=deletebst(root->right,val);
}
else{
if(root->left==NULL){
struct node *temp;
temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL){
struct node *temp;
temp=root->left;
free(root);
return temp;
}

temp=minval(root->right);
root->data=temp->data;
root->right=deletebst(root->right,root->data);

}
return root;
}
int main(){
struct node *root=NULL;
clrscr();
root=insert(root,3);
root=insert(root,5);
root=insert(root,1);
root=insert(root,4);
root=insert(root,2);
root=deletebst(root,3);
printf("\nInorder: ");
inorder(root);
printf("\nPreorder: ");
preorder(root);
printf("\nPostorder: ");
postorder(root);

getch();
return 0;
}