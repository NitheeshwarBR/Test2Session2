#include<stdio.h>
#include<math.h>
void input(float *x1,float *x2,float *y1,float *y2)
{
  printf("Enter the ponts of the lines\n");
  scanf("%f %f %f %f",x1,x2,y1,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
}
void output(float x1,float x2,float y1,float y2,float area)
{
  printf("the distance between the points (%f,%f)and (%f,%f)is %f\n",x1,x2,y1,y2,area);
}
int main()
{
   float a,b,c,d,dist;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&dist);
  output(a,b,c,d,dist);
  return 0;
  
}
