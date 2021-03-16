#include<stdio.h>
float inp1(){
float x;
printf("Enter value of h ");
scanf("%f",&x);
return x;
}
float inp2(){
    float y;
printf("Enter value of b");
scanf("%f",&y);
return y;
}
float inp3(){
    float z;
printf("Enter value of d");
scanf("%f",&z);
return  z;
}
float out(float x,float y,float z)
{
return 0.333*(x*y*z)+(y/z);}
int main(){
float a=inp1();
float b=inp2();
float c=inp3();
float ans=out(a,b,c);
printf("Volume is %f",ans);
return 0;}
