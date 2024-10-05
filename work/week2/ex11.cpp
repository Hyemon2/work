#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    int data;
    string b;

    cout<<"10진수 입력 : "<<endl;
    cin>>data;
   
    while(true) {

        cout<< "여러 진법으로 출력하기 oct(8), hex(16), digit(10)"<<endl;
        cout << "해당 진법 입력 : "<<endl;
        cin >> b;


        if(b == "16" || b == "hex") {
            cout << "16진수: " << hex << data << endl;
        }
        else if(b == "8" || b == "oct") {
            cout << "8진수: " << oct << data << endl;
        }
        else if(b == "10" || b == "digit") {
            cout << "10진수: " << dec << data << endl;
        }
        else {
            cout<<"해당 진법이 없습니다";
            break;

        }
    }

    return 0;
}

    //std::cout << "16진수(소문자): " << std::hex << data << std::endl;