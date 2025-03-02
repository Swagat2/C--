#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int i=0;
    while (i<3)
    {
        
        cout<<"The ASCII code of "<<ch<<" is "<<int(ch)<<endl;
        i++;
    }
}