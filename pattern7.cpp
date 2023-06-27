/* Printing pattern like 
1
1 2
1 3 5
1 4 7 10
1 5 9 13 17 
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
        cout<<(i * j +1)<<" ";
    }
    cout<<endl;
 }
 
    
    
 }

