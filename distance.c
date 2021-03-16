#include<stdio.h>
#include<math.h>
int difordinatesinp()
{
int x2;
int x1;
printf("Enter ordinates");
scanf("%d %d",&x2,&x1);
return x2-x1;}
int difabsiscainp()
{
int y2,y1;
printf("Enter the absisca");
scanf("%d %d",&y2,&y1);
return y2-y1;}
int dist(int o,int a){
return (o)*(o)+(a)*(a);
}
double finaldist(int k){
return sqrt(k);}
int main(){
int i=difordinatesinp();
int j=difabsiscainp();
int m=dist(i,j);
double ans=finaldist(m);
printf("Distance is %lf",ans);

}
