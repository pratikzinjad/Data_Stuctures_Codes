#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void SelectionSort(int arr[],int n){
int i,j,temp,minindex;
for(i=0;i<n-1;i++){
minindex=i;
for(j=i+1;j<n;j++){
if(arr[minindex]>arr[j]){
minindex=j;
} }
temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;

}
}
int main(){
int n,*arr,i;
clrscr();
printf("Program for Selection sort.\n");
printf("\nEnter the no of elements that need to be sorted:");
scanf("%d",&n);
arr=(int *)malloc(n*sizeof(int));
printf("Enter unsorted list of elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
SelectionSort(arr,n);
printf("Elements after sorting:\n");
for(i=0;i<n;i++){
printf("%d\t",arr[i]);}
free(arr);
getch();
return 0;
}
