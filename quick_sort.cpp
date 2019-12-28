#include<iostream>
using namespace std;
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
    cout <<endl; 
} 
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int index=start;
    int temp; 
    for(int i=start;i<end;i++)
    {
    	if(arr[i]<=pivot)
        {
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            index++;
        }
     }
      temp=arr[end];
      arr[end]=arr[index];
      arr[index]=temp;
      cout<<arr[index]<<" ";
     return index;
 }
 void Quicksort(int a[],int start,int end)
 {
    if(start<end)
    {
         int index=partition(a,start,end);
             Quicksort(a,start,index-1);
             Quicksort(a,index+1,end);
    }
}
int main()
{
        int n;
        int array[] = {2, 5, 3, 8, 1, 6 };  // statically created dynamic array
        n = sizeof(array)/sizeof(array[0]);
       cout<<"The pivots are :"<<endl;
       Quicksort(array,0,n-1);
        cout<<endl<<"After Quick Sort the array is:"<<endl<<endl;
      printArray(array, n);
    return 0;
}
