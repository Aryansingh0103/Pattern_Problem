/* Printing pattern like 
 * * * * * 
 * * * * *
 * * * * *
 * * * * *
*/
#include <iostream>
using namespace std;

int main(){
 
 int num;
 cout<<"Enter the number of your choice:"<<endl;
 cin>>num;

 int row = 1;
 while (row<=num)
 {
    int column = 1;
 while (column<=num)
 {
    cout<<" * ";
    column = column + 1;
 }
    cout<<endl;
    row = row + 1;
 }

}