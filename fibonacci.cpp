/Fibonacci Series upto n no. of terms

#include <iostream>

using namespace std;
void fib(int n)                //will print n no. of terms in fibonnaci series
{
    int f1=0,f2=1,nextterm=0;
    for(int i=0;i<n-2;i++)
    {
        if(i==0)
          cout<<f1<<",";
        if(i==1)
          cout<<f2<<",";
        nextterm=f1+f2;
        f1=f2;
        f2=nextterm;
      cout<<nextterm<<",";      
    }
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}

