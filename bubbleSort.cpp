//Bubble Sort
#include <iostream>

using namespace std;
void bubblesort(int arr[],int len){
    int i,j,temp;
    for( i=0;i<len;i++){
    for(j=0;i<len-i;i++)           //len-i bcz last i elemnst are already at their right position
    {
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
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
   bubblesort(arr,len);
   for(int i=0;i<len;i++)
   {
       cout<<arr[i];
   }
   return 0;
}
