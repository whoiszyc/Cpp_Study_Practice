#include <iostream>

// Namespace is more or less like a module in Python
namespace foo {
    namespace bar {
        namespace baz {
            int qux = 42;
        }
    }
}

// You can reopen a namespace and add stuff across translation units.
namespace foo {
    namespace bar {
        namespace baz {
            int zyc = 31;
        }
    }
}

namespace fbz = foo::bar::baz;

int main()
{
    std::cout << fbz::qux << " This is the number declared in the first namespace" << '\n';
    std::cout << fbz::zyc << " This is the number declared in the second namespace" << '\n';
}
