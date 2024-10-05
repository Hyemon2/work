#include <iostream>
using namespace std;

int main() {
    double num;
    cout<<"실수를 입력하세요 : ";
    cin>>num;

    int integerpart = static_cast<int>(num);
    double decipart = num - integerpart;

    cout<<"정수 part : "<<integerpart<<endl;
    cout<<"소수 part : "<<decipart;
}