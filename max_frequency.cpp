//Finding max frequency alphabet in a string
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int arr[26]={0};
    for(int i=0;str[i]!='\0';i++)    //creating an array which stores frequency of each alphabet
    {
        if(str[i]<='z' && str[i]>='a')
        {
            arr[str[i]-96-1]++;
        }
        else if(str[i]<='Z' && str[i]>='A')
        {
            arr[str[i]-64-1]++;
        }
    }
    int max=0;
    char alpha='a';
    for(int i=0;i<26;i++)      //finding maximum frequency alphabet
    {
        if(arr[i]>max)
        {
            max=arr[i];
            alpha='a'+i;
        }
    }
    cout<<max<<" "<<alpha;
    return 0;
}

