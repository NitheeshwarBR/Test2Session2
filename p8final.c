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

struct _polygon{
int n;
Line l[100];
float perimeter;
};
typedef struct _polygon Polygon;

int input_n()
{
  int x;
  printf("Enter Number of Sides of The Polygon\n");
  scanf("%d",&x);
  return x;
}
int input_polygon(int n,Polygon *p)
{
  for(int i=0;i<n;i++)
    {
      p->n=input_n();
    }
}
Line input_line()
{
  Line l;
  printf("Enter the points\n");
  scanf("%f %f %f %f",&l.p1.x,&l.p1.y,&l.p2.x,&l.p2.y);
  return l;
}
void input_n_lines(int n,Line l[n])
{
  for(int i=0;i<n;i++)
    {
      l[i]=input_line();
    }
}
void find_perimeter(Polygon *p)
{
  Line x;
  int n;
  p->n=input_polygon(n,p);
  p->l[100]=input_n_lines(n);
  p->perimeter=p->n*sqrt(pow((p->l->p2.x)-(p->l->p1.x),2)+pow((p->l->p2.y)-(p->l->p1.y),2));
}
void output(Polygon p)
{
  printf("The perimeter of the polygon is %f\n",p.perimeter);
}
int main()
{
  Polygon x;
  find_perimeter(&x);
  output(x);
  return 0;
}
