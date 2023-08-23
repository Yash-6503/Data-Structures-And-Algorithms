#include<stdio.h>
void quicksort(int n[20], int low, int high)
{
    int i,j,pivot,t;
    if(low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while(i<j)
        {
            while(n[i]<n[pivot] && n[high])
            i++;
            while(n[j]>n[pivot])
            j--;
            if(i<j)
            {
                t=n[i];
                n[i]=n[j];
                n[j]=t;
            }
        }
        t=n[pivot];
        n[pivot=n[j]];
        n[j]=t;
        quicksort(n,low,j-1);
        quicksort(n,j+1,high);
    }
}
int main()
{
    int i, count, n[20];
    printf("enter total number of elements u want to store");
    scanf("%d",&count);
    printf("enter %d elements",count);
    for(i=0;i<count;i++)
    scanf("%d",&n[i]);
    quicksort(n,0,count-1);
    printf("\n sorted elements:");
    for(i=0;i<count;i++)
    printf("%d",n[i]);
    return 0;
}

