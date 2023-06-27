/* Printing pattern like 
A
B B
C C C
D D D D
E E E E E
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
        char ch = 'B'+ i -1 ;
        cout<<ch<<" ";
    }
    cout<<endl;
 }  
   
 }

