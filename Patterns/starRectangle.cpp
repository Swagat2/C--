#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter the number of rows and columns : ";
    cin>>m>>n;
    for (int i = 1; i <=m; i++)//no of rows
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        
    }
    
}