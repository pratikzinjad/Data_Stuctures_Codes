#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
void Display(struct node **front){
struct node *temp;
temp=*front;
if((*front)->data==0){printf("No element to delete\n");}
while(temp!=NULL){
printf("<-%d-> ",temp->data);
temp=temp->next;
}
printf("\n");
}
void InsertValAtFront(struct node **front,struct node **rear,int val){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->prev=NULL;
temp->next=*front;
(*front)->prev=temp;
*front=temp;
if((*rear)->data==0){
*rear=*front;
}

}
void InsertValAtRear(struct node **front,struct node **rear,int val){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=NULL;
temp->prev=*rear;
(*rear)->next=temp;
*rear=temp;
if((*front)->data==0){
*front=*rear;
}
}
void DeleteValAtFront(struct node **front,struct node **rear){
struct node *temp;
temp=*front;
*front=temp->next;
(*front)->prev=NULL;
if(*rear==temp){
*rear=NULL;
}
free(temp);
}
void DeleteValAtRear(struct node **front,struct node **rear){
struct node *temp;
temp=*rear;
*rear=temp->prev;
(*rear)->next=NULL;
if(*front==temp){
*front=NULL;
}
free(temp);
}
int main(){
int choice,val;
struct node *front,*rear;
clrscr();
printf("||Code for Double ended queue using Doubly linked list||\n");

do{
printf("Options available:\n1.Insertion At front\n2.Insertion at end(rear)\n3.Deletion at start\n4.Deletion at end\n5.Display\n6.Exit\nEnter your choice:\n");
scanf("%d",&choice);
if(choice==1){
printf("Enter a value to be insert:");
scanf("%d",&val);
InsertValAtFront(&front,&rear,val);
}
else if(choice==2){
printf("Enter a value to be insert:");
scanf("%d",&val);
InsertValAtRear(&front,&rear,val);
}
else if(choice==3){
DeleteValAtFront(&front,&rear);
}
else if(choice==4){
DeleteValAtRear(&front,&rear);
}
else if(choice==5){Display(&front);}
else if(choice==6){printf("Bye.....\n");}
}while(choice!=6);
getch();
return 0;
}
