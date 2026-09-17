#include<stdio.h>
int main() {
    float C;
    printf("Enter a temperature in celsius:");
    scanf("%f",&C);
    printf("Fahrenheit temperature=%2f F",(C*1.8)+32);
    return 0;
}
