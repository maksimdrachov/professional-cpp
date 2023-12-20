#include <array>

using namespace std;

int main()
{
	{
		[[maybe_unused]] int myArray[3];
		myArray[0] = 0;
		myArray[1] = 0;
		myArray[2] = 0;
	}

	{
		[[maybe_unused]] int myArray[3] = { 0 };
	}

	{
		[[maybe_unused]] int myArray[3] = {};
	}

	{
		[[maybe_unused]] int myArray[3]{};
	}

	{
		[[maybe_unused]] int myArray[]{ 1, 2, 3, 4 }; // The compiler creates an array of 4 elements.
	}

	{
		[[maybe_unused]] int myArray[3]{ 2 };
		[[maybe_unused]] size_t arraySize{ std::size(myArray) };
	}
}
