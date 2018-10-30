#include<stdio.h>
#include<ctype.h>

int prime(int n)
{
    if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0||n==7||n==5||n==3||n==2)
        return n;
    else
        return 1;
}

int main()
{
    int n;
    char cont='Y';
    while(cont=='Y'){
        printf("Enter n : ");
        scanf("%d",&n);

        if(n==prime(n))
            printf("%d is a prime.\n",n);
        else
            printf("%d is not a prime.\n",n);

        printf("Continue (Y/N)?  ");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    printf("Coding by 407411015\n");
}
