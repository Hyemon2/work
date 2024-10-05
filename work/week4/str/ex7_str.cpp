#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "This is a long string.";
    size_t pos = str.find("is");
    cout << str << endl;
    cout << pos << endl;
}

