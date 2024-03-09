#include <stdio.h>

/*
Allan Jean-Jacques
Lab Assignment 7
COP 3502
3/8/24
*/

// Bubble Sort and count swaps
int bubbleSort(int arr[], int n) 
{
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}

// Selection Sort and count swaps
int selectionSort(int arr[], int n) 
{
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_index]) 
            {
                min_index = j;
            }
        }
        if (min_index != i) 
        {
            // Swap arr[i] and arr[min_index]
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
            swaps++;
        }
    }
    return swaps;
}

int main() 
{
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    printf("array1:\n");
    for (int i = 0; i < n1; i++) 
    {
        int swaps = bubbleSort(array1, n1);
        printf("%d: %d\n", array1[i], swaps);
    }
    printf("Total # of swaps: %d\n\n", bubbleSort(array1, n1));

    printf("array2:\n");
    for (int i = 0; i < n2; i++) 
    {
        int swaps = selectionSort(array2, n2);
        printf("%d: %d\n", array2[i], swaps);
    }
    printf("Total # of swaps: %d\n\n", selectionSort(array2, n2));

    return 0;
}