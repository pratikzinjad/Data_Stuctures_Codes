#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;};
void InsertAtstart(struct node **head,int val){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=*head;
temp->prev=NULL;
(*head)->prev=temp;
*head=temp;
}
void Display(struct node **head){
struct node *temp;
temp=*head;
if(temp==NULL){printf("No element to display");}
else{
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
if(temp!=NULL){printf("<-->");}
}printf("\n");
}  }
void Search(struct node **head,int val){
struct node *temp;
int flag=0,count=0;
temp=*head;
while(temp->data!=val){
temp=temp->next;
count++;
if(temp==NULL){flag=1;
printf("Value is not present in the list.\n");break;}
}
if(flag==0){printf("Element is present in the list at index %d\n",count+1);}
}
void InsertAtend(struct node **head,int val){
struct node *d,*temp;
d=*head;
temp=(struct node*)malloc(sizeof(struct node));
if(d==NULL){
temp->data=val;
temp->next=*head;
temp->prev=NULL;
(*head)->prev=temp;
*head=temp;}
else{
while(d->next!=NULL){
d=d->next;
}
temp->data=val;
temp->next=NULL;
temp->prev=d;
d->next=temp;
temp->next->prev=temp;
}   }
void InsertAtindex(struct node **head,int index,int val){
struct node *temp,*d;
int count=0;
d=*head;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
if(index==1){
temp->next=*head;
temp->prev=NULL;
(*head)->prev=temp;
*head=temp;}
else{
while(count!=index-1){
d=d->next;
//printf("%d\t",d->data);
count++;}

temp->next=d;
temp->prev=d->prev;
d->prev->next=temp;
d->prev=temp;
}  }
void InsertAftervalue(struct node **head,int valnode,int val){
struct node *temp,*d;
d=*head;
while(d->data!=valnode){
d=d->next;
}
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=d->next;
temp->prev=d;
d->next->prev=temp;
d->next=temp;
}
void InsertBeforevalue(struct node **head,int valnode,int val){
struct node *temp,*d;
d=*head;
while(d->data!=valnode){
d=d->next;
}
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=d;
temp->prev=d->prev;
d->prev->next=temp;
d->prev=temp;
}
void DeleteAtstart(struct node **head){
struct node *temp;
temp=*head;
(*head)=temp->next;
(*head)->prev=NULL;
free(temp);}
void DeleteAtend(struct node **head){
struct node *temp;
temp=*head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->prev->next=NULL;
free(temp);
}
void DeleteAtindex(struct node **head,int index){
struct node *temp,*d;
int count=0;
temp=*head;
while(count!=index-1){
temp=temp->next;
count++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
void DeleteAftervalue(struct node **head,int valnode){
struct node *temp;
temp=*head;
while(temp->data!=valnode){temp=temp->next;}
temp=temp->next;
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
void DeleteBeforevalue(struct node **head,int valnode){
struct node *temp;
temp=*head;
while(temp->next->data!=valnode){temp=temp->next;}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
void Changevalue(struct node **head,int index,int val){
struct node *temp;
int count=0;
temp=*head;
while(count!=index-1){
temp=temp->next;
count++;
}
temp->data=val;
}
int main(){
struct node *head=NULL;
int choice,val,valnode,index;
printf("||Code for Doubly Linked list||\n");
do{
printf("Operations can be done:\n1.Display\n2.Search\n3.InsertAtstart\n4.InsertAtend\n5.InsertAtindex\n6.InsertAftervalue\n7.InsertBeforevalue\n8.DeleteAtstart\n9.DeleteAtend\n10.DeleteAtindex\n11.DeleteAftervalue\n12.DeleteBeforevalue\n13.Changevalue\n14.Exit");
printf("\nEnter a choice:");
scanf("%d",&choice);
if(choice==1){printf("Doubly linked list is:\t");
Display(&head);}
else if(choice==2){printf("Enter the value to be search:");
scanf("%d",&val);
Search(&head,val);}
else if(choice==3){
printf("Enter value of element:");
scanf("%d",&val);
InsertAtstart(&head,val);}
else if(choice==4){
printf("Enter value of element:");
scanf("%d",&val);
InsertAtend(&head,val);
}
else if(choice==5){
printf("Enter value of element:");
scanf("%d",&val);
printf("Enter index at which element has to be enter:");
scanf("%d",&index);
InsertAtindex(&head,index,val);
}
else if(choice==6){
printf("Enter a value of element:");
scanf("%d",&val);
printf("Enter a element after which you have to add another element:");
scanf("%d",&valnode);
InsertAftervalue(&head,valnode,val);
}
else if(choice==7){
printf("Enter a value of element:");
scanf("%d",&val);
printf("Enter a element before which you have to add another element:");
scanf("%d",&valnode);
InsertBeforevalue(&head,valnode,val);
}
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
printf("Enter a value after which element is to be delete:");
scanf("%d",&valnode);
DeleteAftervalue(&head,valnode);
}
else if(choice==12){
printf("Enter a value before which element is to be deleted:");
scanf("%d",&valnode);
DeleteBeforevalue(&head,valnode);
}
else if(choice==13){
printf("Enter the index at which value is to be change:");
scanf("%d",&index);
printf("Enter the value that to be update:");
scanf("%d",&val);
Changevalue(&head,index,val);
}
else if(choice==14){printf("Exit......");}
else{printf("Invalid Input.\n");}
}while(choice!=14);
getch();
return 0;
}

