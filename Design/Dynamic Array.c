#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Anum 100
int main()
{
    int *A = (int *)malloc(Anum * sizeof(int));
    for (int i = 0; i < Anum; i++)
        A[i] = i;
    for (int i = 0; i < Anum; i++)
        printf("%d ", A[i]);
    system("pause");
}
