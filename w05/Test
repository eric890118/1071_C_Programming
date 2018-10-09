#include<stdio.h>
#include<math.h>

int encode(int N=0)
{
    int a=0,b=0,c=0,d=0,e=0;
    a=N/1000;
    b=(N-a*1000)/100;
    c=(N-a*1000-b*100)/10;
    d=N-a*1000-b*100-c*10;
    if(a+5>10)e=a-5;
    else e=a+5;
    return c*1000+d*100+e*10+b;
}

int main()
{

    int choice;

    while(1)
    {
        printf("(1) Arithmetic Computation\n");
        printf("(2) List BMI ranges\n");
        printf("(3) Draw Four Vertical Triangles\n");
        printf("(4) encode(n)\n");
        printf("(5) decode(n)\n");
        printf("(6) Exit\n");
        scanf("%d",&choice);
        printf("\n");
        if(choice==6)
        {
            printf("Bye! coding by 407411015\n");
            break;
        }
        switch(choice)
        {
        case 1:
            int n1,n2;
            printf("Enter two integers: ");
            scanf("%d%d",&n1,&n2);
            printf("\n%d + %d = %d\n",n1,n2,n1+n2);
            printf("%d - %d = %d\n",n1,n2,n1-n2);
            printf("%d * %d = %d\n",n1,n2,n1*n2);
            printf("%d / %d = %d\n",n1,n2,n1/n2);
            printf("%d %% %d = %d\n\n",n1,n2,n1%n2);
            break;

        case 2:
            while(1)
            {
                float h1,h2;
                float w1=0,w2=0;
                printf("Enter height (-1 to exit): ");
                if(h1==-1||h2==-1)
                    break;

                scanf("%f%f",&h1,&h2);
                for(float i=h1; i<=h2; i=i+1)
                {
                    w1=(i*i)/10000*18.5;
                    w2=(i*i)/10000*24;
                    printf("%.0f cm: %.1f ~ %.1f (kg)\n",i,w1,w2);
                }
                printf("\n");
            }
            break;

        case 3:
            while(1)
            {
                int h;
                printf("Enter height (-1 to exit): ");
                scanf("%d",&h);
                if(h==-1)
                    break;
                for(int i=1; i<=h; i++)
                {
                    for(int i1=h-i; i1>=1; i1--)
                    {
                        printf(" ");
                    }
                    for(int i2=i; i2>=1; i2--)
                    {
                        printf("*");
                    }
                    printf("  ");
                    for(int i2=i; i2>=1; i2--)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            break;

        case 4:
            int N,n;
            int a=0,b=0,c=0,d=0,e=0;
            printf("Enter N (-1 to exit) : ");

            if(a==1)
                break;
            n=encode(N);
            printf("%d\n",n);

            break;

        }
    }
    return 0;
}
