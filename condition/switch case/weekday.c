#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    printf("it's sunday");
        break;
    case 2:
     printf("it's monday");
    break;
    case 3:
    printf("it's tuesday");
        break;
    case 4:
    printf("it's wednesday");
    break;
    case 5:
    printf("thresday");
    break;
    case 6:
    printf("friday");
    break;
    case 7:
    printf("saturday");
    break;
    default:
    printf("invalid");

    }return 0;
}