#include<iostream>
using namespace std;
void Insert(int arr[], int n)
{
    int i, key, j;
    for(i =1; i < n; i++)
    {
        key = arr[i];
        j = i -1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void print(int arr[], int n)
{
    for(int i =0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10],n;
    cout<<"Enter number of array: ";
    cin>>n;
    cout<<"Enter array : ";
        for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Insert(arr,n);
    print(arr,n);
    return 0;
}
