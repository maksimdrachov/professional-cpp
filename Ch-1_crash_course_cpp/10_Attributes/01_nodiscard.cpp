[[nodiscard]] int func()
{
	return 42;
}

int main()
{
	func(); // This will cause an error "ignoring value of int func() declared with attribute 'nodiscard'"
}
