//Substring position in a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int j,temp;
    string str;
    getline(cin,str);
    string substr;
    getline(cin,substr);
    for(int i=0;str[i]!='\0';i++)
    {
        j=0;
       if(str[i]==substr[j]){        //if substring characters match in string
           temp=i+1;
           while(str[i]==substr[j])      //keep iterating 
          {     
             j++;
             i++;
          } 
       if(substr[j]=='\0')             //if substring ends that means all characters matched within string
       {
           cout<<"substring found at: "<<temp;
       }
       else                  //
         {
             i=temp;
             temp=0;
         }
       }
    }
    if(temp=0)
    {
        cout<<"substring not found";
    }
    return 0;
}

