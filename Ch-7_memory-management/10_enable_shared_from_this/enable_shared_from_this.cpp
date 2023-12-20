/// Deriving a class from std::enable_shared_from_this allows a method called on an object to
/// safely return a shared_ptr or weak_ptr to itself.
/// Without this base class, one way to return a valid shared_ptr or weak_ptr is by adding
/// a weak_ptr as a member to the class, and to return copies of it
/// or return shared_ptrs constructed from it.
/// The enable_shared_ptr_from_this class adds the following two methods
/// to a class deriving from it:
/// 	1. shared_from_this(): Returns a shared_ptr that shares ownership of the object.
/// 	2. weak_from_this(): Returns a weak_ptr that tracks ownership of the object.

/// Note that you can use shared_from_this() on an object only if its pointer
/// has already been stored in a shared_ptr; otherwise, a bad_weak_ptr exception is thrown.
/// In the example, make_shared() is used in main() to create a shared_ptr called ptr1,
/// which contains an instance of Foo.
///

#include <memory>

using namespace std;

class Foo : public enable_shared_from_this<Foo>
{
public:
	shared_ptr<Foo> getPointer() {
		return shared_from_this();
	}
};

int main()
{
	auto ptr1{ make_shared<Foo>() };
	auto ptr2{ ptr1->getPointer() };
}
