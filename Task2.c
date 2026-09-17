Question2:
 #include<stdio.h>
int main() {
    int Late_days;
    printf("Enter number late Days:");
    scanf("%d",&Late_days);
    if(Late_days==0) {
        printf("NO fine");
    }
    else{
       if(Late_days>=1 &&Late_days<=5) {
        printf("Fine:RS.50");
    }else if(Late_days>=6 && Late_days<=10) {
        printf("Fine:Rs.100");
    }else{
        printf("Fine:RS.200");
    }
return 0;
    }
