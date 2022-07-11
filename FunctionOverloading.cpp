//Function Overloading
#include<iostream>
using namespace std;
class example{
    public:
       void display()           
       {
           cout<<"No agrguments"<<endl;
       }
       void display(int x)       
       {
           cout<<"one Int argument"<<endl;
       }
       void display(char x)           // diff datatype of argument
       {
           cout<<"one char argument"<<endl;
       }
       void display(int x, float y)   //diff no. of arguments
       {
           cout<<"int and float arguments"<<endl;
       }
       void display(float x, int y)    //diff sequence of arguments datatypes
       {       
           cout<<"float and int arguments"<<endl;
       }
};
int main(){
    example obj;
    obj.display();
    obj.display('k');
    obj.display(3);
    obj.display(3,6.8);
    obj.display(9.8,4);
    
    
}
