#ifndef Problem3Inh_H
#define Problem3Inh_H

#include "Problem3Table.h"

//inheritate from Prob3Table
class Problem3Inh : public Problem3Table
{

protected:
	int *augTable;
public:
	Problem3Inh(char const *, int, int);
	~Problem3Inh();
	const int *getAugTable(void) { return augTable; }
};

#endif