#include<stdio.h>

int sum(int n){
    int s=0,t=1;
    for(int i=1;t<=n;i+=3,t++){
        s=s+i;
    }

    return s;
}

int main(){
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("sum(%d) = %d\n",n,sum(n));
    printf("sum(%d) = %d\n",n+1,sum(n+1));
    printf("sum(%d) = %d\n",n+2,sum(n+2));

    printf("Coding by 1B-407411015-³sªÃÂ×\n");
    return 1;
}
