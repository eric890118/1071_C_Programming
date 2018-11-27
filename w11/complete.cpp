#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void prArr(int m[][8])
{
    for(int i=0;i<8;i++)
    {
        printf("|----|----|----|----|----|----|----|----|\n");
        for(int j=0; j<8; j++)
        {
            printf("| %02d ",m[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("|----|----|----|----|----|----|----|----|\n\n");
}

struct Pos
{
    int row;
    int col;
};

Pos findNextBestPos(int m[][8],int access[][8],int row,int col)
{
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextRow,nextCol;
    int min=9;
    int minRow=-1,minCol=-1;
    access[row][col]=0;


    for(int i=0;i<8;i++)
    {
        nextRow=row+v[i];
        nextCol=col+h[i];

        if(nextRow>=0&&nextRow<=7&&nextCol>=0&&nextCol<=7&&access[nextRow][nextCol]>0)
        {
            access[nextRow][nextCol]--;
            if(access[nextRow][nextCol] < min)
            {
                min=access[nextRow][nextCol];
                minRow=nextRow;
                minCol=nextCol;
            }
        }
    }
    pos.row=minRow;
    pos.col=minCol;
    return pos;
}

int KnightTour(int m[][8], int row, int col)
{
    int moves=1;
    int access[8][8]=
    {
        2, 3, 4, 4, 4, 4, 3, 2,
        3, 4, 6, 6, 6, 6, 4, 3,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        3, 4, 6, 6, 6, 6, 4, 3,
        2, 3, 4, 4, 4, 4, 3, 2
    };
    Pos pos;

    for(int i=2;i<=64;i++)
    {
        pos=findNextBestPos(m,access,row,col);
        if(pos.row==-1&&pos.col==-1) break;
        else
        {
            m[pos.row][pos.col]=i;
            moves++;
            row=pos.row;
            col=pos.col;
        }
    }
    return moves;
}


int main()
{
    while(1)
    {
        printf("Menu\n");
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n\n");
        int counting[8][8];
        int choice;
        int row,col;
        scanf("%d",&choice);
        int access[8][8] =
        {
            2, 3, 4, 4, 4, 4, 3, 2,
            3, 4, 6, 6, 6, 6, 4, 3,
            4, 6, 8, 8, 8, 8, 6, 4,
            4, 6, 8, 8, 8, 8, 6, 4,
            4, 6, 8, 8, 8, 8, 6, 4,
            4, 6, 8, 8, 8, 8, 6, 4,
            3, 4, 6, 6, 6, 6, 4, 3,
            2, 3, 4, 4, 4, 4, 3, 2
        };
        int moves=1;
        int m[8][8]={0};

        Pos pos;

        if(choice==3) break;
        switch(choice)
        {
        case 1:
            printf("Enter row and col : ");
            scanf("%d%d",&row,&col);
            m[row][col] = 1;

            for(int i=2; i<=64; i++)
            {
                pos=findNextBestPos(m,access,row,col);
                if(pos.row==-1&&pos.col==-1) break;
                else
                {
                    m[pos.row][pos.col]=i;
                    moves++;
                    row=pos.row;
                    col=pos.col;
                }
            }
            prArr(m);
            printf("\nThe tour ended with %d moves.\n", moves);
            if(moves==64)
                printf("This was a full tour!\n");
            printf("\n");
            break;

        case 2:
            for(int a=0;a<8;a++)
            {
                for(int b=0;b<8;b++)
                {
                    counting[a][b]=KnightTour(m,a,b);
                }
            }
            prArr(counting);
            break;
        }
    }

}
