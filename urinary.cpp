//urinary operator overloading 
#include <iostream>
using namespace std;
class Increase {
    private:
    int value;
    public:
    Increase()
    {
        value =10;
    }
    void operator ++()
    {
        value =value+5;
    }
    // Write C++ code h
    void display()
    {
        cout<<"value:"<<value;
    }
};
int main()
{
    Increase Inc;
    ++Inc;
    Inc.display();
    return 0;
}
        
