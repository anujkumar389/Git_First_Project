#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                if(j%2==1){
                    printf("*");
                }else{
                    printf("#");
                }
            }else{
                if(j%2==1){
                    printf("#");
                }else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}