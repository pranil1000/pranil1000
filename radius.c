#include <stdio.h>
#define PI 3.14
void Diameter();
void area();
void circumference();
float radius();
int main()
{
    diameter();
    printf("\n");
    area();
}
void diameter ()
{
    printf("Enter the radius:");
    scanf("%f",&radius);
    printf("The diameter is %f",2+radius);
}
void area()
{
    float ar = PI*radius*radius;
    printf("The area is %f",ar);
}
void circumference()
{
    float cir = 2*PI*radius ;
    printf("The circumference is %f",cir);
}
