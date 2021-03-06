// RemoveElement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int RemoveElement(int A[], int n, int elem)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < n; i++)
    {
        if (A[i] == elem)
        {
            continue;
        }

        A[j] = A[i];
        j++;
    }
    return j;
}

int RemoveDuplicatesfromSortedArray(int A[], int n)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < n; i++)
    {
        if (j >= n)
        {
            break;
        }

        while (A[i] == A[j])
        {
            j++;
        }
        A[i+1] = A[j];
    }

    return i;
}

int RemoveDuplicatesfromSortedArray2(int A[], int n)
{
    int i = 0;
    int j = 1;
    int icount = 0;
    
    if (n <= 0)
    {
        return n;
    }

    for (i = 0; i < n; i++)
    {
        if (j > n)
        {
            break;
        }

        while (A[i] == A[j]) 
        {
            j++;
            icount++;
            if (icount < 2)
            {
                i++;
                A[i] = A[j];
            }
        }
        A[i + 1] = A[j];
        j++;
        icount = 0;
    }

    return i;
}

int main()
{
    int A[32] = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8 };
    int B[32] = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8 };
    int c[32] = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8 };
    int number = 0;
    
    printf("The original arry is:\n ");
    for (int i = 0; i < 32; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n ");

    printf("The new arry is: \n "); 
    number = RemoveElement(A, 32, 1);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", A[i]);
    }
    printf("The new arry number is : %d \n ", number);

    printf("The new arry is: \n ");
    number = RemoveDuplicatesfromSortedArray(B, 32);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", B[i]);
    }
    printf("The new arry number is : %d \n ", number);

    printf("The new arry is: \n ");
    number = RemoveDuplicatesfromSortedArray2(c, 32);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", c[i]);
    }
    printf("The new arry number is : %d \n ", number);

    return 0;
}

