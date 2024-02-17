#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include <time.h>

char field[10][10] ;

void fieldShow(int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            int x = field[i][j];
            printf("%c  ", x);
            //printf("H");
        }
        printf("\n");
    }

    printf("Field Printed\n");
}

void fieldInt(int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            field[i][j] = 'O';
            
        }
    }
    printf("Field intialized\n");
}

void placeMines(int rows, int cols, int mines)
{
    srand(time(NULL));

    int placed = 0;

    while(placed <= mines)
    {
        int randRow = (rand() % rows) + 1;
        int randCol = (rand() % cols) + 1;

        
        if(field[randRow][randCol] == 'O')
        {
            field[randRow][randCol] = '^';
            placed++;
        }
    }

    printf("Bombs Place\n");
}



void main()
{
    printf("Welcome to the MINESWEEPER\n");
    printf("HEEHEE");
    int start;
    int rows = 10;
    int cols = 10;
    int bombs = 25;
    //printf("You ready?");
    //scanf("%d", &start);
    fieldInt(rows,cols);
    fieldShow(rows,cols);
    placeMines(rows,cols,25);
    fieldShow(rows,cols);
}
