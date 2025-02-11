#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int stack[100],sp=-1;
void push(int val){
if(sp==99){printf("Stack full");}
else{
sp++;
stack[sp]=val;
}}
int pop(){
int d;
if(sp==-1){printf("Invalid");}
else{
d=stack[sp];
sp--;
}
return d;
}
int main(){
char postfix[100],ch;
int i=0,op1,op2,result,strlen1;
clrscr();
printf("Enter a postfix expression:");
scanf("%s",&postfix);
strlen1=strlen(postfix);
while(strlen1>i){
if(isdigit(postfix[i])){
op2=postfix[i]-'0';
push(op2);}
else{
op2=pop();
op1=pop();
ch=postfix[i];
switch(ch){
case '+': result=op1+op2;push(result);break;
case '-': result=op1-op2;push(result);break;
case '*': result=op1*op2;push(result);break;
case '/': result=op1/op2;push(result);break;
default: printf("Invalid operation\n");break;
}
}
i++;
}
printf("Answer is %d",stack[sp]);
getch();
return 0;
}
