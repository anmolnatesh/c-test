#include<stdio.h>  
void pal()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("its is palindrome number \n");    
else    
printf("it is not palindrome\n");   
}   
