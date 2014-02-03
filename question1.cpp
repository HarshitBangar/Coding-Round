#include <iostream>
#include <string>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int direction = 0;
    int m,n=0;
    cin>>m>>n;
    if((m<=0)||(n<=0))
        return 0;
    int A[m*n];
    for (int row = 0; row < n; row++)
      for (int col = 0; col < m; col++)
            cin >> A[row*m + col];
    int minRow,minCol = 0;
    int maxRow = n - 1;
    int maxCol = m-1;
    string out;
    while(minRow<=maxRow || minCol<=maxCol){
         for(int col = minCol;col<=maxCol;col++){
                cout<<A[minRow*(m) + col];
	 }
	 minRow++;
         for(int row = minRow;row<=maxRow;row++){
                cout<<A[row*m + maxCol];
 	 }
	 maxCol--;
         for(int col = maxCol;col>=minCol;col--){
                cout<<A[maxRow*(m) + col];
         }
	 maxRow--;
         for(int row = maxRow;row>=minRow;row--){
                cout<<A[row*(m) + minCol];
	 }
	 minCol++;
    }
    return 0;
}
