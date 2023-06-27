/* Printing pattern like 
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9 
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
        cout<<(i + j +1)<<" ";
    }
    cout<<endl;
 }
 
    
    
 }

