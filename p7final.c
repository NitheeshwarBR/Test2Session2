#include<stdio.h>
#include<math.h>
struct _point{
float x,y;
};

typedef struct _point Point;

struct _line{
Point p1,p2;
float distance;
};

typedef struct _line Line;

Point input_point()
{
  Point n;
  printf("Enter the Points\n");
  scanf("%f %f",&n.x,&n.y);
  return n;
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt(pow((l->p2.x)-(l->p1.x),2)+pow((l->p2.y)-(l->p1.y),2));
}
void output(Line l)
{
  printf("the length of the line with the points(%f,%f) ,(%f,%f) is %f\n",l.p1.x,l.p2.x,l.p1.y,l.p2.y,l.distance);
}
int main()
{
  Line x;
  x=input_line();
  find_length(&x);
  output(x);
  return 0;
}

