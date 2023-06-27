/* Printing pattern like 
A 
A B 
A B C 
A B C D 
*/
#include <iostream>
using namespace std;

int main(){
 
 int n;
 cout<<"Enter the number of your choice:"<<endl;
 cin>>n;
int i;
 for ( i = 1; i <=n; i++)
 {
    int j;
    for ( j = 1; j <=i; j++)
    {
        char ch = 'A'+ j -1 ;
        cout<<ch<<" ";
    }
    cout<<endl;
 }  
   
 }

