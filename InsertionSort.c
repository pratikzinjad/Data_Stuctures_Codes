#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void InsertionSort(int arr[],int n){
int i,key,j;
for(i=1;i<n;i++){
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j=j-1;
}arr[j+1]=key;
}}
int main(){
int n,*arr,i;
clrscr();
printf("Program for Insertion sort.\n");
printf("\nEnter the no of elements that need to be sorted:");
scanf("%d",&n);
arr=(int *)malloc(n*sizeof(int));
printf("Enter unsorted list of elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
InsertionSort(arr,n);
printf("Elements after sorting:\n");
for(i=0;i<n;i++){
printf("%d\t",arr[i]);}
free(arr);
getch();
return 0;
}
