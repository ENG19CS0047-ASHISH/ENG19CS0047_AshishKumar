#include<stdio.h>
int sum(int x,int y)
{
return x+y;
}
int main(){
printf("Enter two numbers");
int  a,b;
scanf("%d %d",&a,&b);
int res;
res=sum(a,b);
printf("Sum of %d and %d is %d",a,b,res);
}
