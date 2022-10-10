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
   int arr[100],i,n,j,temp,current;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    display(arr,n);
   return 0;
}