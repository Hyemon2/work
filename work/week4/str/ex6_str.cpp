#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "ABCDEFGH";
    str = str.erase(0,1);
    cout << str << endl;
}