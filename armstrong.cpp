//Armstrong or not (sum of cubes of all digit is same as the no. itself)
#include<iostream>
using namespace std;
void armstrong(int num)
{
    int n=num;
    int digit,sum=0;
    do{
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }while(n!=0);
    if(sum==num)
    cout<<"armstrong";
    else
    cout<<"not armstrong";
}
int main()
{
    int num;
    cin>>num;
    armstrong(num);
    return 0;
}
