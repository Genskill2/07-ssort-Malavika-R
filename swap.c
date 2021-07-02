#include<math.h>
#include<stdio.h>

void swap_max( int arr[], int x, int n)
{
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos_1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==x)
            pos_1 = i;
    }
    int temp;
    for(int i=0; i<pos_1; i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void ssort(int arr[], int l)
{
    for(int i=0; i<l; i++)
    {
        swap_max(arr,1,i);
    }
}
