#include<stdio.h>
int main()
{
float length;
float width;
float area;
printf("Enter Length :\n");
scanf("%f", &length);
printf("Enter Width :\n");
scanf("%f", &width);
area=length*width;
printf("Area of a Rectangle:%.2f\n", area);
return 0;
}
