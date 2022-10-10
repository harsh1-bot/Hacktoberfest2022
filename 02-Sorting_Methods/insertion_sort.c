#include<stdio.h>
#include<string.h>

void display(int arr[],int n)
{
    printf("Sorted array is : ");
    printf("[");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("]");
}

int main(){
   int arr[100],i,n,j,current;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //insertion sort logic
    for(i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=current;
    }

    display(arr,n);
   return 0;
}