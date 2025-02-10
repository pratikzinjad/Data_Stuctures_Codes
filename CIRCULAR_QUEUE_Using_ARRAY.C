#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
int arr[10],front=0,rear=-1,choice,val,i;
clrscr();
printf("Program for array implementation of Queue.\n");
do{
printf("Operations.\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Exit\nEnter your choice:\n");
scanf("%d",&choice);
if(choice==1){printf("Enter val of element:");
scanf("%d",&val);
if((rear+1)%10!=front || rear==-1){
rear=(rear+1)%10;arr[rear]=val;}
else{printf("Queue is full.\n");}}
else if(choice==2){
if(rear==-1){printf("No Element to delete");}
else if(front==rear){front=0;rear=-1;}
else{front=(front+1)%10;}
}
else if(choice==3){
if(rear==-1){printf("No element to display\n");}
else{
printf("Current  first element in the queue is %d.\n",arr[front]);
}
    }
else if(choice==4){
printf("Exit.....");}
else{printf("Invalid input\n");}
}while(choice!=4);
   getch();
   return 0;
}

