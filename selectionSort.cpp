//Selection Sort
#include <iostream>

using namespace std;
void selectionSort(int arr[],int n){
    int min_idx,temp;
    for(int i=0;i<n-1;i++){
        min_idx=i;
        for(int j=i+1;j<n;j++){      //after each iteration smallest no.s are at their positions from left
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
            temp=arr[i];   //swapping arr[i] and arr[min_idx]
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
    }
}
int main()
{
   int len;
   cin>>len;
   int arr[len];
   cout<<"enter the digits: ";
   for(int i=0;i<len;i++)
   {
       cin>>arr[i];
   }
   selectionSort(arr,len);
   for(int i=0;i<len;i++)
   {
       cout<<arr[i];
   }
   return 0;
}
