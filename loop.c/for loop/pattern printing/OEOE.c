#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%2==0){
                printf("E");
            }else{
                printf("O");
            }
        }
        printf("\n");
    }
}