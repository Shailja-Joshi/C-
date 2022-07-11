#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,j,l,k=0;
	string s;
	scanf("%d",&t);
	while(t--)
	{
	    cin>>s;
	    l=s.length();
	    int frst[26]={0};
	    int scnd[26]={0};
	    for(i=0, j=l-1;i<j;i++,j--)
	    {
	        frst[s[i]-'a']++;
	        scnd[s[j]-'a']++;
	    }
	    for(k=0;k<26;k++)
	    {
	        if(frst[k]!=scnd[k])
	        {
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(k==26)
	    cout<<"YES"<<endl;
	}
	return 0;
}

