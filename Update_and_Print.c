#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
    // printf("%d %d\n",x,v);
    // int b[n];
    for (int i=0;i<n;i++){
        // printf("%d ",a[i]);
        if(x==i){
            a[i]=v;
        }
        // printf("%d ",a[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
