#include <iostream>
#include <string>
#include <cstring>
using namespace std;



string untilFive(const string& str) {
    if (str.length() > 5) 
        return str.substr(0, 5);
    else 
        return str;
}

int main()
{

    cout<<"20235189 서혜원"<<endl;

    string stra, outstr;
    cout << "Enter a string : ";
    getline(cin, stra);

    outstr = untilFive(stra);
    cout << "->" << outstr;

    char strb[50];
    cout << "\nEnter a string: ";
    gets(strb);
    outstr = untilFive(strb);
    cout << " -> " << outstr;
    return 0;
}