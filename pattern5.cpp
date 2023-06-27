/* Printing pattern like 
 6 
6 5 
6 5 4 
6 5 4 3 
6 5 4 3 2 
6 5 4 3 2 1 
*/
#include <iostream>
using namespace std;

int main(){
 
 int n;
 cout<<"Enter the number of your choice:"<<endl;
 cin>>n;
int i;
 for ( i = 0; i <=n; i++)
 {
    int j;
    for ( j = 0; j <=i; j++)
    {
        cout<<(n - j +1)<<" ";
    }
    cout<<endl;
 }
 
    
    
 }

