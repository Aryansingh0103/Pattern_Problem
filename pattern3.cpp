/* Printing pattern like 
 1 
 2 3
 4 5 6
 7 8 9 10
*/
#include <iostream>
using namespace std;

int main(){
 
 int n;
 cout<<"Enter the number of your choice:"<<endl;
 cin>>n;

 int row = 1;
 int count = 1;
 while (row<=n)
 {
    int column = 1;
 while (column<=row)
 {
    cout<< count << " ";
    count = count + 1;
    column = column + 1;
 }
    cout<<endl;
    row = row + 1;
 }

}