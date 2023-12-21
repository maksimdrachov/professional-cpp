#include <iostream>
#include <memory>
#include "BingCherry.hpp"
#include "BingCherryTree.hpp"

int main()
{
	BingCherryTree theTree;
	std::unique_ptr<Cherry> theCherry{ theTree.pick() };
	theCherry->printType();
}

