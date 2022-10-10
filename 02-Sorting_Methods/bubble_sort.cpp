#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in your array : ";
    cin >> n;
    int arr[n];
    cout << "Enter your array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting array

   int counter=1;
        while(counter<n){
            for (int i = 0; i < n-counter; i++)
            {
                if(arr[i]>arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            counter++;
        }
    
    cout<<"["
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    
   return 0;
}