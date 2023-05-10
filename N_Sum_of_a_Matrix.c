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

    int array_2[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {
            scanf("%d", &array_2[i][u]);
        }
    }

    int array_3[row][col];
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            array_3[i][j] = array[i][j] + array_2[i][j];
        }
    }

    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ", array_3[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("%d ", array_3[0][0]);

    return 0;
}