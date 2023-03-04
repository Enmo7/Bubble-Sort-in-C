#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr2[],int len);

int main()
{
    int arr[] = {1,5,33,-85,21,56,-96,21,3,99,220,0,56,32};
    int i;

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("The array before sorting is: \n");

    for(i=0; i<length; ++i)
    {
        printf("%d \n", arr[i]);
    }

    bubblesort(arr,length);

    return 0;
}

void bubblesort(int arr2[],int len)
{
    int i, c;
    int temp;
    for(i=0; i<len-1; ++i)
    {
        for(c=0; c<len-1-i; ++c)
        {
            if(arr2[c]>arr2[c+1])
            {
                //swap
                temp = arr2[c];

                arr2[c] = arr2[c+1];

                arr2[c+1] = temp ;
            }
        }
    }

    printf("The array after sorting is: \n");
    for(i=0; i<len; ++i)
    {
        printf("%d \n", arr2[i]);
    }
}
