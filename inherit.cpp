#include<iostream>
using namespace std;

class Parent
{
    private:
    int a,b;

    public:
    Parent()
    {
        cout << "This is in parent";
    }
    int set(int x,int y)
    {
        a= x;
        b = y;
        return a+b;
    }
    void sum()
    {
        cout << a+b;
    }

};
class child : public Parent
{
    int x;

    public:
    child()
    {
        cout << "this is in child";
    }
    void display()
    {
        int r = set(10,20);
        cout << r;   
    }
};

int main()
{   
    // // Parent obj;
    // obj.set(10,10);
    // obj.sum();
    child obj;
    obj.display();
    return 0;
}
