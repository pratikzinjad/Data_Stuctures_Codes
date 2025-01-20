#include<stdio.h>
#include<conio.h>
#define max 100
int main(){
int arr[max],front=0,rear=-1,choice,val,i;
printf("Program for array implementation of Queue.\n");
do{
printf("Operations.\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:\n");
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
printf("Current elements in the queue.\n");
for(i=front;i<=rear;i++){
printf("%d\t",arr[i]);
}}    }
else if(choice==4){
printf("Exit.....");
}
else{printf("Invalid input\n");}
   }while(choice!=4);
   getch();
   return 0;
}

//Using Dynamic array
#include<stdio.h>
#include<conio.h>
int main(){
int *arr=NULL,front=0,rear=-1,choice,val,i,size=0;
clrscr();
printf("Program for array implementation of Queue.\n");
do{
printf("Operations.\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:\n");
scanf("%d",&choice);
if(choice==1){printf("Enter val of element:");
scanf("%d",&val);
if(size<=rear+1){size+=10;
arr=(int*)realloc(arr,size*sizeof(int));}
rear++;arr[rear]=val;}
else if(choice==2){
if(front>rear){printf("No element to delete\n");}
else{front++;}
}
else if(choice==3){
if(front>rear){printf("No element to display\n");}  else{
printf("Current elements in the queue.\n");
for(i=front;i<=rear;i++){
printf("%d\t",arr[i]);
}}    }
else if(choice==4){
printf("Exit.....");
}
else{printf("Invalid input\n");}
   }while(choice!=4);
free(arr);
   getch();
   return 0;
}
