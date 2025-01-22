#include<stdio.h>
#include<conio.h>
#define max 100
int main(){
int arr[max],front=0,rear=-1,choice,val,i;
printf("Program for array implementation of Queue.\n");
do{
printf("Operations.\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Exit\nEnter your choice:\n");
scanf("%d",&choice);
if(choice==1){printf("Enter val of element:");
scanf("%d",&val);
if(rear==max-1){printf("Queue is full");}
else{rear++;arr[rear]=val;}}
else if(choice==2){
if(front>rear){printf("No element to delete\n");}
else{front++;}
}
else if(choice==3){
if(front>rear){printf("No element to display\n");}  else{
printf("Current first element in the queue is %d.\n",arr[front]);}    }
else if(choice==4){
printf("Exit.....");
}
else{printf("Invalid input\n");}
   }while(choice!=4);
   getch();
   return 0;
}
