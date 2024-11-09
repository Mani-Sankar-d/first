#include <stdio.h>

void incor(int i, int j, char ttt[3][3], char *p)
{
    char choice;
    printf("enter choice: ");
    scanf(" %c", &choice);

    if (choice == 'O' || choice == 'X')
    {
        ttt[i][j] = choice;
    }
    else
    {
        printf("\nInvalid input\n");
    }
    *p = choice;
}

void check(char ttt[3][3], int *y)
{

    for (int i = 0; i < 3; i++)
    {
        if (ttt[i][0] == ttt[i][1] && ttt[i][1] == ttt[i][2] && ttt[i][0] != '_' && ttt[i][1] != '_' && ttt[i][2] != '_')
        {
            printf("won");
            *y = -1;
            //printf("%d",*y);
            return;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (ttt[0][i] == ttt[1][i] && ttt[1][i] == ttt[2][i] && ttt[0][i] != '_' && ttt[1][i] != '_' && ttt[2][i] != '_')
        {
            printf("won");
            *y = -1;
            //printf("%d",*y);
            return;
        }
    }
    if (ttt[0][0] == ttt[1][1] && ttt[1][1] == ttt[2][2] && ttt[0][0] != '_' && ttt[1][1] != '_' && ttt[2][2] != '_')
    {
        *y = -1;
        printf("won");
    }

    if (ttt[0][2] == ttt[1][1] && ttt[1][1] == ttt[2][0] && ttt[2][0] != '_' && ttt[1][1] != '_' && ttt[0][2] != '_')
    {
        *y = -1;
        printf("won");
    }
}

int main()
{
    char p;

    printf("PLayer 1-->O");
    printf("\nPlayer 2-->X\n");

    char ttt[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            ttt[row][column] = '_';
        }
    }

    int i, j, a, b;
    int lim = 0;
    while (lim != -1)
    {
        printf("enter  coordinte: ");
        scanf("%d%d", &a, &b);
        i = a - 1;
        j = b - 1;

        incor(i, j, ttt, &p);

        for (int k = 0; k < 3; k++)
        {
            for (int l = 0; l < 3; l++)
            {
                printf("%c ", ttt[k][l]);
            }
            printf("\n");
        }
        int y = 9;
        int count = 0;
        check(ttt, &y);
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                if (ttt[r][c] == '_')
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            lim = -1;
            printf("draw");
        }

        if (y == -1)
        {
            if (p == 'O')
            {
                printf("\n1 won");
            }
            else
            {
                printf("\nO won");
            }

            break;
        }
    }
}
