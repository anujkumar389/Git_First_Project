#include<stdio.h>
int main (){
    int age;
    printf("Enter your age  :");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible");

    }
    else{
        printf("You are not eligible");
        return 0;
    }
}