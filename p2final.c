#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the points of the triangle as(x,y)\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int area;
  area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  return area;
}
void output(float x1,float x2,float x3,float y1,float y2,float y3,int is_triangle)
{
  if(is_triangle<=0)
  {
    printf("the points with (%f,%f),(%f,%f) and (%f,%f) does not form a triangle\n",x1,y1,x2,y2,x3,y3);
  }
  else{
    printf("the points with (%f,%f),(%f,%f) and (%f,%f) form a triangle\n",x1,y1,x2,y2,x3,y3);
     }
}
int main()
{
  float a,b,c,d,e,f;
  int area;
  input_triangle(&a,&b,&c,&d,&e,&f);
  area=is_triangle(a,b,c,d,e,f);
  output(a,b,c,d,e,f,area);
  return 0;
}
