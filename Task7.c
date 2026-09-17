#include<stdio.h>
int main() {
    float num1,num2,num3;
    printf("Enter a num1: ");
    scanf("%f",&num1);
    printf("Enter a num2: ");
    scanf("%f",&num2);
    printf("Enter a num3: ");
    scanf("%f",&num3);
    float Average;
    Average=((num1+num2+num3)/3);
    printf("\nAverage=%.2f",Average);
    return 0;
}
