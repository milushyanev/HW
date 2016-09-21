
#include "Problem3Inh.h"
int main(int argc, char** argv) {

	//declare how many rows and colums
	int rows = 5;
	int cols = 6;

	//use inheritance to show Input from txt file
	Problem3Inh tab("Problem3.txt", rows, cols);
	const int *naugT = tab.getTable();
	//for loop to put output in certain order
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << naugT[i*cols + j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	const int *augT = tab.getAugTable();
	for (int i = 0; i <= rows; i++)
	{
		for (int j = 0; j <= cols; j++)
		{
			//use set width set to 4 for output
			cout << setw(4) << augT[i*(cols + 1) + j] << " ";
		}
		cout << endl;
		
	}
	//pause for result to be shown
	system("pause");

	// Exit
	return 0; 
}