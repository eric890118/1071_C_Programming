#include<stdio.h>
#include<ctype.h>
#include<math.h>

int checkSqrt(int n)
{
    int a;
    a=sqrt(n);
    if(a*a==n)
        return n;
    else
        return 1;
}

int main()
{
    int n,a;
    char cont='Y';
    while(cont=='Y')
    {
        printf("Enter n : ");
        scanf("%d",&n);
        a=sqrt(n);
        if(n==checkSqrt(n))
            printf("Yes. %d = %d x %d\n",n,a,a);
        else
            printf("No.\n");

            printf("Continue (Y/N)?  ");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    printf("Coding by 407411015\n");

}
