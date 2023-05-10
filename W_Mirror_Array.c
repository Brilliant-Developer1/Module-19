#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {
            scanf("%d", &array[i][u]);
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = col - 1; 0 <= j; j--)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
00 01 02
10 11 12
20 21 22
*/