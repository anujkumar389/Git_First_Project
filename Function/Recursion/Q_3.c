#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}