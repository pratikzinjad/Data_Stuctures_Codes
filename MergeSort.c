#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Merge(int arr[],int left,int mid,int right){
int i,j,k,*leftarr,*rightarr,n1,n2;
n1=mid-left+1;
n2=right-mid;
leftarr=(int*)malloc(n1*sizeof(int));
rightarr=(int*)malloc(n2*sizeof(int));
for(i=0;i<n1;i++){
leftarr[i]=arr[left+i];}
for(i=0;i<n2;i++){
rightarr[i]=arr[mid+1+i];}
i=0;j=0;k=left;
while(i<n1 && j<n2){
if(leftarr[i]<rightarr[j]){
arr[k]=leftarr[i];
i++;
}
else{
arr[k]=rightarr[j];
j++;}
k++;}
while(i<n1){
arr[k]=leftarr[i];
i++;k++;
}
while(j<n2){
arr[k]=rightarr[j];
j++;k++;
}
}
void MergeSort(int arr[],int left,int right){
int mid;
if(left<right){
mid=left+(right-left)/2;
MergeSort(arr,left,mid);
MergeSort(arr,mid+1,right);
Merge(arr,left,mid,right);
}}
int main(){
int n,*arr,i;
clrscr();
printf("Program for Merge sort.\n");
printf("\nEnter the no of elements that need to be sorted:");
scanf("%d",&n);
arr=(int *)malloc(n*sizeof(int));
printf("Enter unsorted list of elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
MergeSort(arr,0,n-1);
printf("Elements after sorting:\n");
for(i=0;i<n;i++){
printf("%d\t",arr[i]);}
free(arr);
getch();
return 0;
}
