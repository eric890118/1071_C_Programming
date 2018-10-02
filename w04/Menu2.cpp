#include<stdio.h>

void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}

void drawRect(int height,int width,int filled)
{
    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            prchar('*',width);
            printf("\n");
        }
    }
    else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1||j==1||i==height||j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}


void drawVertTan(int height,int type,int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1||i<=height)
                {
                    prchar('*',i);
                }
                else
                {
                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }
        }
        break;
    case 2:

        break;
    case 3:

        break;

    }
}

int main()
{
    int choice,height,width,type,filled;


    while(1)
    {
        printf("Main menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles Triangle\n");
        printf("4. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==4)break;
        switch(choice)
        {
        case 1:
            printf("Enter height,width,filled : ");
            scanf("%d%d%d",&height,&width,&filled);
            drawRect(height,width,filled);
            break;
        case 2:
            printf("Enter height,type,filled : ");
            scanf("%d%d%d",&height,&type,&filled);
            drawVertTan(height,type,filled);
            break;
        }

    }
    return 0;
}
/*
            {
            case 1:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=i; j++)
                    {
                        if(i==1||i==height||j==i||j==1)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 2:
                for(int i=height; i>=1; i--)
                {
                    for(int j=1; j<=i; j++)
                    {
                        if(i==1||i==height||j==i||j==1)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 3:
                for(int i=height; i>=1; i--)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(j==i||i==1||j==height)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 4:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(j==i||i==1||j==height)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            }*/
