/*Programs to understand storage specifiers*/
/*mutable*/
#include <iostream>
using std::cout;

class Test
{
public:
    int a;
    mutable int b;
    Test()
    {
        a = 4;
        b = 10;
    }
};

int main()
{
    const Test t1;
    t1.b = 45;
    cout << t1.b;
    return 0;
}
