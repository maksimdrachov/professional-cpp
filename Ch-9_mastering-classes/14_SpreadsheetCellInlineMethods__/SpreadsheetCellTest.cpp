#include "SpreadsheetCell.hpp"
#include <iostream>

using namespace std;

int main()
{
	SpreadsheetCell myCell { 5 };
	cout << myCell.getValue() << endl;
}
