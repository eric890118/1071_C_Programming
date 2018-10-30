#include<stdio.h>
#include<math.h>
#define Max 100

int main(){
    int x,s[Max];
    int num=-1,fail=0,pass=0;
    float aver=0,add=0;
    int a=0,b=0,c=0,d=0,e=0,f=0;

    printf("Enter a series of scores between 0~100(-1 to exit).\n");
    for(int i=0;x!=-1;num++){
        scanf("%d",&x);
        s[i]=x;
        i+=1;
        if(x<=100&&x>=60)
            pass=pass+1;
        if(x<60&&x>=0)
            fail=fail+1;
        if(x<=100&&x>=0)
            add=add+x;

        if(x==100) a=a+1;
        if(x<100&&x>=90) b=b+1;
        if(x<90&&x>=80) c=c+1;
        if(x<80&&x>=70) d=d+1;
        if(x<70&&x>=60) e=e+1;
        if(x<60&&x>=0) f=f+1;
    }
    aver=add/num;

    printf("\nScores listing:\n");
    for(int i=0;i<=num;i++){
        if(s[i]>=0&&s[i]<=100)
            printf("%d ",s[i]);
    }

    printf("\n");
    printf("The summary:\n");
    printf("NumberCount = %d\n",num);
    printf("PassCount = %d\n",pass);
    printf("FailedCount = %d\n",fail);
    printf("Average= %.1f\n",aver);

    printf("\n100   %d ",a);
    for(;a>0;a--) printf("*");
    printf("\n90~99 %d ",b);
    for(;b>0;b--) printf("*");
    printf("\n80~89 %d ",c);
    for(;c>0;c--) printf("*");
    printf("\n70~79 %d ",d);
    for(;d>0;d--) printf("*");
    printf("\n60~69 %d ",e);
    for(;e>0;e--) printf("*");
    printf("\n0~59  %d ",f);
    for(;f>0;f--) printf("*");

    printf("\n\n");

    printf("Coding by 407411015\n");
}
