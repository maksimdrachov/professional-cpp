#include "SpreadsheetCell.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	SpreadsheetCell* myCellp{ new SpreadsheetCell{ } };

	myCellp->setValue(3.7);
	cout << "cell 1: " << myCellp->getValue() <<
		" " << myCellp->getString() << endl;
	delete myCellp;
	myCellp = nullptr;
}
