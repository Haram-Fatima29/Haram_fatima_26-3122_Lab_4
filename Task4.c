#include<stdio.h>
int main() {
   float length,width;
   printf("Enter length of Rectangle:");
   scanf("%f",&length);
   printf("Enter Width of Rectangle:");
   scanf("%f",&width);
   float Area;
   Area=length*width;
   float Peri_meter;
   Peri_meter=2*(length+width);
   printf("Area of Rectangle=%fcm\n",Area);
   printf("Perimeter of Rectangle=%fcm\n",Peri_meter);
   return 0;
}

