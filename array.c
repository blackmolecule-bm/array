#include <stdio.h>


int sum(int arr[], int start, int len);


int main()
{

    int arr[10];
    int n, i, sumofarray;


    printf("Enter size of the array: ");
    scanf("%d", &n);

      for(i=0; i<n; i++)

    {
    printf("Elements %d: ", i+1);
    scanf("%d", &arr[i]);
    }

    sumofarray = sum(arr, 0, n);
    printf("Sum of all array elements: %d", sumofarray);


    return 0;
}



int sum(int arr[], int start, int len)
{


    if(start >= len)
        return 0;

    return (arr[start] + sum(arr, start + 1, len));
}
