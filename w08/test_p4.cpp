#include<stdio.h>
#include<math.h>
#define Max 100

int main(){
    int s;
    int num=-1,fail=0,pass=0;
    float aver=0,add=0;

    printf("Enter a series of scores between 0~100(-1 to exit).\n");
    for(;s!=-1;num++){
        scanf("%d",&s);
        if(s<=100&&s>=60)
            pass=pass+1;
        if(s<60&&s>=0)
            fail=fail+1;
        if(s<=100&&s>=0)
            add=add+s;
    }
    aver=add/num;

    printf("Scores listing:\n");
    printf("%d\n\n",s);

    printf("The summary:\n");
    printf("NumberCount = %d\n",num);
    printf("PassCount = %d\n",pass);
    printf("FailedCount = %d\n",fail);
    printf("Average= %.1f\n",aver);
}

/* Not End */
