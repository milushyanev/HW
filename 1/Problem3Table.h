#ifndef Problem3Table_H
#define Problem3Table_H

//system libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

//create class
class Problem3Table
{
    protected:
        int rows;               //Number of rows
        int cols;               //Number of columns
        int *rowSum;            //RowSum array
        int *colSum;            //ColSum array
        int *table;             //Table array
        int Total;         //Grand Total
        void calcTable(void);   //Calculate sum
    public:
		Problem3Table(char const *, int, int);   //Constructor
		~Problem3Table();						 //Destructor
        const int *getTable(void) {return table;}
        const int *getRowSum(void) {return rowSum;}
        const int *getColSum(void) {return colSum;}
        int getGrandTotal(void) {return Total;}
};



#endif 