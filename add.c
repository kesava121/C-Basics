#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d %d",&n,&k);
    int a[n][k],t[n][k],c[n][k];
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf("%d",&t[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            c[i][j]=a[i][j]+t[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}