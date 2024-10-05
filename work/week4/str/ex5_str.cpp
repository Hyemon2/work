#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "The time has come. ";
    string str2 = "Are your ready?";
    //str1+=str2;
    str1 = str1.append(str2);
    cout << str1 << endl;
}