#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v[n];
    for (int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int evenSum=0;
    int oddSum=0;
    for (int i=0;i<n;i++){
        // printf("%d ",v[i]);
        if(v[i]%2==0){
            evenSum = evenSum + v[i];
        }
        if(v[i]%2==1){
            oddSum = oddSum + v[i];
        }
    }
    printf("%d %d",evenSum,oddSum);
    return 0;
}