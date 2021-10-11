#include <iostream>
using namespace std;

class Test
{
private:
    int a;

public:
    Test(int a);
    ~Test();
    int result(){
        return this->a;
    };
};

Test::Test(int a)
{
    this->a = a;
}

Test::~Test()
{
}


int main()
{
    Test t = Test(123);
    cout << t.result() << endl;
    return 0;
}