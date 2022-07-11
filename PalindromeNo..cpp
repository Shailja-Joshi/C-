//Palindrome No. or Not

#include<iostream>
using namespace std;
int palindrome(int n)
{
    
    int rev=0,digit;
    do{
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }while(n!=0);
     return rev;
}
int main()
{
    int n,m;
    cin>>n;
    m=palindrome(n);
    
    if(m==n)
    cout<<"Palindrome found";
    else
    cout<<"Not found";
    return 0;
}

