#include <string_view>

class Base
{
public:
	virtual ~Base() = default;
	Base() = default;
	Base(std::string_view str) {}
	Base(float f) {}
};

class Derived : public Base
{
public:
	using Base::Base;
};


int main()
{
	Derived derived1{ "Hello" };   // OK, calls inherited string_view Base ctor
	Derived derived2{ 1.23f };     // OK, calls inherited float Base ctor
	Derived derived3;              // OK, calls inherited default Base ctor
}
