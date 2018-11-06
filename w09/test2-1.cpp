#include<stdio.h>
#include<ctype.h>

int main()
{
    char cont='Y';
    int n1,n2;
    while(cont=='Y')
    {
        printf("Enter two integers : ");
        scanf("%d%d",&n1,&n2);
        if(n1%2==0)
            printf("%d is even; ",n1);
        else
            printf("%d is odd; ",n1);

        if(n1%2!=0 && n1%3!=0 && n1%5!=0 && n1%7!=0 ||n1==2 || n1==3 || n1==5 || n1==7)
            printf("prime");
        else
            printf("nonprime");

        printf("\n");

        if(n2%2==0)
            printf("%d is even; ",n2);
        else
            printf("%d is odd; ",n2);

        if(n2%2!=0 && n2%3!=0 && n2%5!=0 && n2%7!=0 ||n2==2 || n2==3 || n2==5 || n2==7)
            printf("prime");
        else
            printf("nonprime");

        printf("\n");

        printf("%d + %d = %d\n",n1,n2,n1+n2);
        printf("%d - %d = %d\n",n1,n2,n1-n2);
        printf("%d * %d = %d\n",n1,n2,n1*n2);
        printf("%d / %d = %d\n",n1,n2,n1/n2);
        printf("%d %% %d = %d\n",n1,n2,n1%n2);
        printf("\n");
        printf("Continue (Y/N)? ");
        getchar();
        cont=toupper(getchar());

        printf("\n");
    }

    printf("Coding by 1B-407411015-連秉豐\n");
}
