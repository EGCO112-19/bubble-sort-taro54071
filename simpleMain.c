// 6313218 วศิน ไพจิตร์
#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
int main(int argc, char *argv[])
{
    int *a, N;
    printf("How many numbers do you have : ");
    scanf("%d", &N);
    a = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("%d. number :", i + 1);
        scanf("%d", &a[i]);
    }
    display(a, N);
    bubble(a, N);
}