#include<stdio.h>
#include<conio.h>
void InsertAtbegin(int arr[],int *n,int val){
int i;
for(i=*n;i>=0;i--){arr[i+1]=arr[i];}
arr[0]=val;
(*n)++;
printf("Value inserted succesfully\n");
}
void InsertAtend(int arr[],int *n,int val){
 arr[*n]=val; (*n)++;
printf("Value inserted succesfully\n");
}
void InsertAtposition(int arr[],int *n,int val,int pos){
int i;
for(i=*n;i>=pos-1;i--){arr[i+1]=arr[i];}
arr[pos-1]=val;
(*n)++;
printf("Value inserted succesfully\n");
}
void DeleteAtbegin(int arr[],int *n){
int i;
for(i=0;i<*n;i++){arr[i]=arr[i+1];}
(*n)--;
printf("Value deleted succesfully\n");
}
void DeleteAtend(int *n){
(*n)--;
printf("Value deleted succesfully\n");
}
void DeleteAtposition(int arr[],int *n,int pos){
int i;
for(i=pos-1;i<*n;i++){arr[i]=arr[i+1];}
(*n)--;
printf("Value deleted succesfully\n");
}
void Display(int arr[],int n){
int i;
printf("Elements of array are:\n");
for(i=0;i<n;i++){printf("%d\t",arr[i]);}
}
int main(){
int arr[100],n=0,choice,val,pos;
clrscr();
printf("Program for Insertion deletion in array.\n");
do{
printf("Operations can be done.\n1.InsertAtposition\n2.InsertAtbegin\n3.InsertAtend\n4.DeleteAtposition\n5.DeleteAtbegin\n6.DeleteAtend\n7.Display\n8.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);

if(choice==1){
printf("Enter the value:");scanf("%d",&val);
printf("Enter the position:");scanf("%d",&pos);
InsertAtposition(arr,&n,val,pos);
}
else if(choice==2){
printf("Enter the Value:");
scanf("%d",&val);
InsertAtbegin(arr,&n,val);
}
else if(choice==3){
printf("Enter the Value:");
scanf("%d",&val);
InsertAtend(arr,&n,val);
}
else if(choice==4){printf("Enter the Position:");
scanf("%d",&pos);
DeleteAtposition(arr,&n,pos);}
else if(choice==5){
DeleteAtbegin(arr,&n);}
else if(choice==6){
DeleteAtend(&n);}
else if(choice==7){
Display(arr,n);}
else if(choice==8){
printf("Exit.....");
}
}while(choice!=8);
getch();
return 0;
}


