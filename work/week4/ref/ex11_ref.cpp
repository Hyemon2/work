#include <iostream>
#include <string>
using namespace std;

void find2replace(string &fstr, string fhas, bool &success, string frep)
{
    int i = 0;
    while ((i == fstr.find(fhas, i)) != -1)
    {   
        fstr.replace(i, frep.length(), frep);
        success = true; // 발견함. 함수 성공
    }
}
int main()
{
    string str = "C++ programming";
    string has = "+";
    string replace = "p"; 
    bool result = false;
    cout << "변경 전 문자열 = " << str << endl;

    find2replace(str, has, result, replace); //'+' 위치에 'p' 저장

    if (result == true) {
        cout << "변경 후 문자열 = " << str << endl;
    }
    else {
        cout << str << "에서 " << has << "를 발견하지 못함." << endl;
    }
    return 0;
}