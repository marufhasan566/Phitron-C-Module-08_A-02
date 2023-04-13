#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Reverse Print
    for(int i=n-1;i>=0;i--){
        // printf("%d ",a[i]);
        if(i%2==0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}