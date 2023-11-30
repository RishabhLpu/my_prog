#include <iostream>
#include <fstream>
using namespace std;
int main()
{//this is for writing in file
    fstream ff;
    ff.open("single.txt", ios::out);
    ff << "This is the text for writing \n this is line 2";
    ff.close();



    // This is for reading from file
    fstream obj;
    obj.open("single.txt",ios::in);
    // char ch;
    // while(obj.eof()==0)
    // {
    //     obj.get(ch);
    //     cout << ch;

    // }

// for reading line 
    string s;
    while(obj.eof()==0)
    {
        getline(obj,s);
        cout << s<< endl;
    }
    obj.close();

    return 0;
}
