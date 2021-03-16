#include<stdio.h>
int inp1(){
int x;
printf("Enter the value \n");
scanf("%d",&x);
return x;
}
int inp2(){
int y;
printf("Enter the value");
scanf("%d",&y);
return y;
}
int sum(int a, int b){
return a+b;}
void out(int x, int y, int z){
printf("The sum of %d and %d is %d",x,y,z);}
int main(){
int a,b,c;
a=inp1();
b=inp2();
c=sum(a,b);
out(a,b,c);
return 0;}
