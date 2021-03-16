#include<stdio.h>
 float volume( float a, float b,float c){
return 0.33*a*b*c+(b/c);
}
int main(){
float h,d,b;
float ans;
scanf("%f %f %f",&h,&d,&b);
ans=volume(h,d,b);
printf("Volume is %f",ans);
return  0;
}
