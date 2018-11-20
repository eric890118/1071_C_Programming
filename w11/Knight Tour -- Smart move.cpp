#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void prArr(int m[][8])
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            printf("%02d ",m[i][j]);
        }
        printf("\n");
    }
}

struct Pos{
    int row;
    int col;
};

Pos findNextBestPos(int m[][8],int access[][8],int row,int col)
{
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextRow, nextCol;
    int min=9;
    int minRow=-1, minCol=-1;
    access[row][col]=0;


    for(int i=0;i<8;i++)
    {
        nextRow = row+v[i];
        nextCol = col+h[i];

        if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol <=7 && access[nextRow][nextCol]>0)
        {
            access[nextRow][nextCol]--;
            if(access[nextRow][nextCol] < min){
                min = access[nextRow][nextCol];
                minRow = nextRow;
                minCol = nextCol;
            }
        }
    }
    pos.row = minRow;
    pos.col = minCol;
    return pos;
}

int main()
{
    int access[ 8 ][ 8 ] =
       { 2, 3, 4, 4, 4, 4, 3, 2,
         3, 4, 6, 6, 6, 6, 4, 3,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         3, 4, 6, 6, 6, 6, 4, 3,
         2, 3, 4, 4, 4, 4, 3, 2
	   };
    int moves = 1;
    int m[8][8]= {0};

    Pos pos;
    srand(time(NULL));
    int row = rand()%8;
    int col = rand()%8;
    printf("1: (row,col)=(%d,%d)\n",row,col);

    m[row][col] = 1;
    for(int i=2;i<=64;i++)
    {
        pos = findNextBestPos(m,access,row,col);
        moves++;
        m[pos.row][pos.col] = i;
        row = pos.row;
        col = pos.col;
    }
    printf("\n");
    prArr(m);
    printf("\nTotal moves : %d\n",moves);

}
