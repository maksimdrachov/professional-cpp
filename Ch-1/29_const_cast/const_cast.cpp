// const_cast allows to add const-ness to a variable
// or cast away const-ness of a variable.
// The "correct" solution would be to make const consistent in the program,
// but that is not always an option, especially if you're using third-party libraries.

void ThirdPartyLibraryMethod(char* str) {}

void f(const char* str)
{
	ThirdPartyLibraryMethod(const_cast<char*>(str));
}

int main()
{
	f("Hello World");
}
