#include<stdio.h>
int
TriArea (float b, float h)
{
  return ((b * h) / 2);
}
main ()
{
  float base, height, area;
  printf ("enter the values of the base and the height of the triangle \n");
  scanf ("%d %d", &base, &height);
  area = TriArea (base, height);
  printf ("the area of the triangle is %d", area);
}
