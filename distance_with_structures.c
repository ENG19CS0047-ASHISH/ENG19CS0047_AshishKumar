#include<stdio.h>
#include<math.h>
struct point{
int x,y;
};
double getdistance(struct point a,struct point b){
double dist;
dist=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
return dist;}
int main(){
struct point a,b;
printf("Enter cordinate of point a");
scanf("%d %d",&a.x,&a.y);
printf("Enter cordinate of point b");
scanf("%d %d",&b.x,&b.y);
printf("Distance is %lf",getdistance(a,b));
}
