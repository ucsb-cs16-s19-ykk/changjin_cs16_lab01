#include <iostream>
using namespace std; 

int main(){

	int row_n = 1; 
	int column_n = 1; 
	
        

	while (column_n != 0 && row_n != 0 ){

	// prompt the users to enter the row and column numbers 
	cout << "Enter number of rows and columns:"; 
	cin >> row_n >> column_n;

	// set a variable with value equal to column_n
	int y = row_n;
		while(y > 0){
			
			for(int x = column_n;x >0;x--){
				
				cout << "X."; 

			}
		// start a new line for each row print 
		cout << endl;
		y--;
		}	

	}
		// if the user enters zero for either of the input parameters
		return 0; 

}
