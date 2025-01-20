#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int sp=-1,arr[100],choice,val,i;
clrscr();
printf("Program for stack using Array:\n");
do{
printf("Operations can be done.\n1.Push\n2.pop\n3.show\n4.Exit\nEnter your choice:");
scanf("%d",&choice);
if(choice==1){
if(sp==100-2){printf("Stack limit is 100.\n");}
else{sp++;
printf("Enter the value to be push in the stack:");
scanf("%d",&val);
arr[sp]=val;
printf("Value sucessfully pushed into the stack.\n");
} }
else if(choice==2){
if(sp==-1){printf("No elements to pop.\n");}
else{sp--;
printf("last element poped succesfully.\n"); }
}
else if(choice==3){
if(sp==-1){printf("No elements to show.\n");}
else{printf("Elements of stack are:\t");
for(i=sp;i>=0;i--){printf("%d\t",arr[i]);}}
}printf("\n"); }while(choice!=4);

getch();
return 0;
}

//using Dynamic memory allocation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int sp=-1,*arr=NULL,choice,val,i,size=0;
clrscr();
printf("Program for stack using Array:\n");
do{
printf("Operations can be done.\n1.Push\n2.pop\n3.show\n4.Exit\nEnter your choice:");
scanf("%d",&choice);
if(choice==1){
if(size-1==sp){size=size+10;arr=(int*)realloc(arr,size*sizeof(int));}
sp++;
printf("Enter the value to be push in the stack:");
scanf("%d",&val);
arr[sp]=val;
printf("Value sucessfully pushed into the stack.\n");
 }
else if(choice==2){
if(sp==-1){printf("No elements to pop.\n");}
else{sp--;
printf("last element poped succesfully.\n"); }
}
else if(choice==3){
if(sp==-1){printf("No elements to show.\n");}
else{printf("Elements of stack are:\t");
for(i=sp;i>=0;i--){printf("%d\t",arr[i]);}}
}printf("\n"); }while(choice!=4);
free(arr);
getch();
return 0;
}


