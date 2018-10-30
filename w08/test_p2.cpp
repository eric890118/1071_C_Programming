#include<stdio.h>
#include<ctype.h>

#define Max 100

int prime(int n)
{

    if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0||n==7||n==5||n==3||n==2)
        return n;
    else
        return 1;

}

int findPrimes(int data[Max],int n1,int n2)
{
    int n;
    for(; n1<=n2; n1++)
    {
        if(n1==prime(n))
            return n1;
        else
            return 1;
    }
}

int main()
{
    int data[Max];
    int n,n1,n2;
    char cont='Y';
    while(cont=='Y')
    {
        printf("Enter n1 and n2 : ");
        scanf("%d%d",&n1,&n2);
        printf("%d ",n1);
        printf("\n");


        printf("Continue (Y/N)?  ");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    printf("Coding by 407411015\n");
}


/* Not End */
