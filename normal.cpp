#include<iostream>
using namespace std; 
int main()
{
     int number;
     cout<<"Enter a number : ";
     cin>>number;
     //1,2,4,8,16,
     //5,15,45
    for (int i = 2; i<=number/2; i++){
        if (number%i==0){
            cout<<" Compossite number ";
            break;
         
        }
           
    }
     

}


      

           
        
    
    
    
    

