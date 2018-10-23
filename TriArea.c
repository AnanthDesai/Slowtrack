#include<stdio.h>
int TriArea(int base,int height)
{
return ((base*height)/2);
}
int main()
{
int base,height,area;
printf("enter the values of the base and the height of the triangle \n");
scanf("%d %d",&base,&height);
area=TriArea(base,height);
printf("the area of the triangle is %d", area);
}
