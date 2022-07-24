#include <stdio.h>
void warshall(int a[][20], int n)
{
    int k, i, j;
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                a[i][j] = (a[i][j] || a[i][k] && a[k][j]);
}
void main()
{
    int n, a[20][20], i, j;
    printf("\n enter number of nodes in the graph \n ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix for the graph:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    warshall(a, n);
    printf(" the path matrix is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf(" \n");
    }
}