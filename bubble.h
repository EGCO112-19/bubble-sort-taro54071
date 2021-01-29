//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//  6313218 วศิน ไพจิตร์
#ifndef bubble_h
#define bubble_h
#include "swap.h"
void display(int value[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%5d", value[i]);
    }
    printf("\n");
}

void bubble(int a[], int N)
{
    int i, j, sorted;
    for (i = N - 1; i > 0; i--)
    {
        sorted = 0;
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            { // decending
                swap(&a[j], &a[j + 1]);
                sorted = 1;
                display(a, N);
            }
        }
        if (sorted == 0)
        {
            printf("--------END--------\n");
            return;
        }
    }
}

#endif /* bubble_h */
