#include <iostream>

class MyClass
{
public:
	MyClass(int& ref) : m_ref{ ref } { /* Body of constructor */ }
	int getVar()
	{
		return m_ref;
	}

private:
	int& m_ref;
};

int main()
{
	int i{ 123 };
	MyClass m{ i };

	i = 1;
	std::cout << m.getVar() << std::endl;
}
