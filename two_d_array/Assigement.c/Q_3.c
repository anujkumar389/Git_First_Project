#include<stdio.h>
int main(){
    int r,c;
    printf ("enter row :");
    scanf("%d",&r);
    printf("Enter colume :");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter element :");
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);

}