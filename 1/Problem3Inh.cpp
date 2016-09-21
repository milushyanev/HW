
//include header file which is inherited
#include "Problem3Inh.h"

Problem3Inh::Problem3Inh(char const *file, int row, int col) :
Problem3Table(file, row, col)
{
	//declare augTable as dynamic array
	int size = ((rows + 1) * (cols + 1));
	augTable = new int[size];

	//initialize dynamic array to 0
	for (int i = 0; i < size; i++)
	{
		augTable[i] = 0;
	}

	//include everything to augtable
	int j = 0;      //table index
	int k = 0;      //rowSum index
	int m = 0;      //colSum index
	int count = 0;  //counter per row
	int newSize = (rows + 1) * (cols + 1); //dynamic size
	for (int i = 0; i < newSize; i++)
	{
		if (i >= rows * (cols + 1))
		{
			augTable[i] = colSum[m++];
		}
		else
		{
			count++; //count plus one
			augTable[i] = table[j++];
			//set boundaries for the count
			if (count == 6)
			{
				augTable[++i] = rowSum[k++];
				count = 0;
			}
		}
	}
	//result from newSize -1 to get total
	augTable[newSize - 1] = Total;
}

Problem3Inh::~Problem3Inh()
{
	//dealocate memory from array
	delete[] augTable;
}