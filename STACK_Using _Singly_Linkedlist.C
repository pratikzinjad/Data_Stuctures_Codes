#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main(){
struct node *head=NULL;
int choice,val;
printf("||Code for Stack using Singly Linked List||");
do{
printf("Options available:\n1.Push\n2.Pop\n3.Peek\n4.Exit\nEnter your choice\n");
scanf("%d",&choice);
if(choice==1){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter value to be push:");
scanf("%d",&val);
temp->data=val;
temp->next=head;
head=temp;
}
else if(choice==2){
if(head->data==0){
printf("Stack is empty\n");
}
else{
struct node *temp;
temp=head;
head=head->next;
free(temp);
}}
else if(choice==3){
if(head->data==0){
printf("Stack is empty\n");
}
else{
printf("Top of Stack is %d\n",head->data);
}}
else{
printf("Bye......");
}
}while(choice!=4);
getch();
return 0;
}
