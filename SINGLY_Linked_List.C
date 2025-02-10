#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;};
void InsertAtstart(struct node **head,int val){  //3
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=*head;
*head=temp;}
void Display(struct node **head){                   //1
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=*head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
if(temp!=NULL){printf("->");}
}printf("\n");}
void Search(struct node **head,int val){ int count=0,flag=0;  //2
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=*head;
while(temp!=NULL){ count++;
if(temp->data==val){printf("Element present in list at index %d\n",count);flag=1;break;}
temp=temp->next;
}if(flag==0){printf("Element not present in the list.\n");}
}
void InsertAtend(struct node **head,int val){
struct node *temp,*d;                                                  //4
temp=(struct node*)malloc(sizeof(struct node));
d=(struct node*)malloc(sizeof(struct node));
d=*head;
temp->data=val;
temp->next=NULL;
while(d->next!=NULL){
d=d->next;
}
d->next=temp;
}
void InsertAtindex(struct node **head,int index,int val){
int count=0;                                                        //5
struct node *temp,*d;
temp=(struct node*)malloc(sizeof(struct node));
d=(struct node*)malloc(sizeof(struct node));
d=*head;
if(index==1){temp->data=val;
temp->next=*head;
*head=temp;}
while(count!=index-2){
if(d->next!=NULL){d=d->next;}
count++;}

temp->data=val;
temp->next=d->next;
d->next=temp;
}
void InsertAftervalue(struct node **head,int valnode,int val){              //6
struct node *temp,*d;
temp=(struct node*)malloc(sizeof(struct node));
d=(struct node*)malloc(sizeof(struct node));
d=*head;
while(d->data!=valnode){
d=d->next;
}
temp->data=val;
temp->next=d->next;
d->next=temp;
}
void InsertBeforevalue(struct node **head,int valnode,int val){          //7
struct node *temp,*d;
temp=(struct node*)malloc(sizeof(struct node));
d=(struct node*)malloc(sizeof(struct node));
d=*head;
while(d->next->data!=valnode){
d=d->next;
}
temp->data=val;
temp->next=d->next;
d->next=temp;
}
void DeleteAtstart(struct node **head){
struct node *temp;                                                    //8
temp=*head;
*head=temp->next;
free(temp);
}
void DeleteAtend(struct node **head){                              //9
struct node *temp,*d;
temp=*head;
while(temp->next!=NULL){
d=temp;
temp=temp->next;
}
d->next=NULL;
free(temp);
}
void DeleteAtindex(struct node **head,int index){
struct node *temp,*d;                                          //10
int count=0;
temp=*head;
if(index==1){temp=*head;*head=temp->next;free(temp);}
else{
while(count!=index-2){
temp=temp->next;
count++;}
d=temp->next;
temp->next=temp->next->next;
free(d); }
}
void DeleteAftervalue(struct node **head,int val){
struct node *temp,*d;                                      //11
temp=*head;
while(temp->data!=val){temp=temp->next;}
d=temp->next;
temp->next=temp->next->next;
free(d);
}
void DeleteBeforevalue(struct node **head,int val){    //12
struct node *temp,*d;
temp=*head;
if(temp->next->data==val){temp=*head;*head=temp->next;free(temp);}
else{
while(temp->next->next->data!=val){temp=temp->next;}
d=temp->next;
temp->next=temp->next->next;
free(d);
}}
void Changevalue(struct node **head,int index,int val){
struct node *temp;
int count=0;
temp=*head;
while(count!=index-1){                 //13
temp=temp->next;
count++;}
temp->data=val;
}

void Reverse(struct node **head){
struct node *prev,*next,*temp;
temp=*head;
prev=NULL;
while(temp!=NULL){
next=temp->next;
temp->next=prev;
prev=temp;
temp=next;
}
*head=prev;
}
int main(){
int choice,val,index,valnode;
struct node *head=NULL;
clrscr();
printf("||Code for Singly Linked List||\n");
do{
printf("Operations can be done:\n1.Display\n2.Search\n3.InsertAtstart\n4.InsertAtend\n5.InsertAtindex\n6.InsertAftervalue\n7.InsertBeforevalue\n8.DeleteAtstart\n9.DeleteAtend\n10.DeleteAtindex\n11.DeleteAftervalue\n12.DeleteBeforevalue\n13.ChangeThevalue\n14.Reverse a Linked list\n15.Exit");
printf("\nEnter Your Choice:");
scanf("%d",&choice);
if(choice==1){  printf("Elements in the list are\t");
Display(&head);printf("\n");
}
else if(choice==2){printf("Enter a val to be search:");
scanf("%d",&val);
Search(&head,val);}
else if(choice==3){printf("Enter a value of node:");
scanf("%d",&val);
InsertAtstart(&head,val);}
else if(choice==4){ printf("Enter a value of node:");
scanf("%d",&val);
InsertAtend(&head,val);
}
else if(choice==5){printf("Enter a value of node:");
scanf("%d",&val);
printf("Enter the index at which it is to be inserted:");
scanf("%d",&index);
InsertAtindex(&head,index,val);}
else if(choice==6){printf("Enter a value of node:");
scanf("%d",&val);
printf("Enter the val of node after which you have to add new node:");
scanf("%d",&valnode);
InsertAftervalue(&head,valnode,val);}
else if(choice==7){printf("Enter a value of node:");
scanf("%d",&val);
printf("Enter the value of node before which you have to add new node:");
scanf("%d",&valnode);
InsertBeforevalue(&head,valnode,val);}
else if(choice==8){
DeleteAtstart(&head);
}
else if(choice==9){
DeleteAtend(&head);
}
else if(choice==10){
printf("Enter a index at which element is to be deleted:");
scanf("%d",&index);
DeleteAtindex(&head,index);
}
else if(choice==11){
printf("Enter the value after which the element is to be deleted:");
scanf("%d",&val);
DeleteAftervalue(&head,val);}
else if(choice==12){
printf("Enter the value before which the element is to be deleted:");
scanf("%d",&val);
DeleteBeforevalue(&head,val);}
else if(choice==13){printf("Enter the index at which value is to be changed:");
scanf("%d",&index);
printf("Enter the value :");
scanf("%d",&val);
Changevalue(&head,index,val);}
else if(choice==14){
Reverse(&head);
printf("Reverse linked list:\n");
Display(&head);
}
else if(choice==15){printf("Exit......");}
else{printf("Invalid input.");}

}while(choice!=15);
getch();
return 0;
}
