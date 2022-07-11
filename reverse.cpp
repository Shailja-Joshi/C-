//Reverse a no.

#include<iostream>
using namespace std;
void rev(int num)
{
  int digit,rev=0;
  do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
        
    }while(num!=0);
    cout<<rev<<endl;
}
int main()
{
    int num;
    cin>>num;
    rev(num);
    return 0;
}
