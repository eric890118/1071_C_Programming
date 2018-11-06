#include <stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++) printf("%c",c);
}

int main()
{
    int h,h2;

    while(1)
    {
        scanf("%d",&h);
        if(h==-1) break;
        h2=h+2;
        for(int i1=1;i1<=(h+1)/2;i1++,h2-=2){
            for(int s1=2;s1<=i1;s1++){
                printf(" ");
            }

            for(int j1=h2+2;j1>=3;j1--){
                printf("*");
            }

            printf("\n");



        }

        for(int i2=(h+1)/2;i2>1;i2--,h2+=2){
            for(int s2=i2;s2>2;s2--){
                printf(" ");
            }

            for(int j2=-1;j2<=h2+2;j2++){
                printf("*");
            }
            printf("\n");

        }

        printf("\n");

    }
    printf("\n");
    printf("Coding by 1B-407411015-³sªÃÂ×\n");
}
