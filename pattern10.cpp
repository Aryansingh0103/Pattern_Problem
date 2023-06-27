/* Printing pattern like 
1 
2 3 
3 4 5 
4 5 6 7 
for compiling use g++ file name 
and for running the command use a 
*/
#include <iostream>
using namespace std;

int main(){
 
 int n;
 cout<<"Enter the number of your choice:"<<endl;
 cin>>n;
 int i=1;
 while (i<=n)
 {
    int j=1;
    while (j <= i)
    {
        cout<<(i + j - 1)<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i +1;
 }
}
 