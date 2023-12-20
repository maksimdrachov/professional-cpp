int main()
{
	float myFloat{ 3.14f };
	[[maybe_unused]] int i1{ (int)myFloat };                // method 1
	[[maybe_unused]] int i2{ int(myFloat) };                // method 2
	[[maybe_unused]] int i3{ static_cast<int>(myFloat) };   // method 3

	[[maybe_unused]] short someShort{ 16 };
	[[maybe_unused]] long someLong{ someShort };          // no explicit cast needed
}
