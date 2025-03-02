#if 0
#include<iostream>
using namespace std;
int main(){
   int number;
    cout<<"Enter a number : ";
    cin>>number;
    int rem;
   int sum = 1;
   for (int i = 1; number!=0; i++)
   {
    rem = number%10;
    sum= sum * rem;
    number = number/10;
   }
   cout<<sum;
    return 0;
}
#endif
#if 1
#include<iostream>
using namespace std;
int main(){
   int number,reversenumber=0,temp;
    cout<<"Enter a number : ";
    cin>>number;
    temp = number;
    int rem;
   int sum = 0;
   if (number%2==0)
   {
    for (int i = 0; number!=0; i++)
        {
        rem = number%10;
        sum= sum + rem;
        number = number/10;
        }
        cout<<sum;
        //reversing of number 2468=>8642
        for(int i=0; temp!=0; i++)
        {
            rem = temp%10;
            reversenumber = reversenumber*10 + rem;
            temp = temp/10;
        }
        cout<<endl<<reversenumber<<endl;
   }
   else
   {
    cout<<"Number is odd";
   }
   
    return 0;
}
#endif
#if 0
#include<iostream>
using namespace std;
int main(){
    int number;
    int fact = 1;
    cout<<"Enter a number : ";
    cin>>number;
    while (number!=0)
    {
        fact=fact*number;
        number--;
        /* code */
    }
    cout<<fact;
    return 0;
}
#endif
// #if 0
// #include<iostream>
// using namespace std;
// int main(){

// }