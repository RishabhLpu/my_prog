#include <iostream>
using namespace std;
int sum(int i, int j)
{
    cout << "sum = "<< (i + j)<<endl;
}
int sum(string str1, string str2)
{
    cout << "sum od two =" << (str1 + str2);
}
int main()
{
    sum(2, 4);
sum("sun", " sun");
return 0;
}
