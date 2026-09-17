#include<stdio.h>
int main() {
    char name[50];
    char ch;
    printf("Enter full name:");
    fgets(name,50,stdin);
     
    printf("Enter a single character:");
    scanf(" %c",&ch);
    printf(" using put my output is\n");
    puts(name);
    printf("Character=%c",ch);
    printf("fgets take full line output including spaces");
    return 0;
}
