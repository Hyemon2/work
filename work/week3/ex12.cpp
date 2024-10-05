#include <iostream>
using namespace std;

int main() {

    cout<<"20235189 서혜원"<<endl;

    int userinput;


    enum class RPS
    {
        Rack = 1,
        Paper,
        Scissor
    };

    while(true)
    {
        cout << ("정수입력 (1, 2, 3이 아닌 수는 프로그램 종료) : ");
        cin >> userinput;
        RPS choice = static_cast<RPS>(userinput);

        if(userinput < 1 || userinput > 3){
            break;
        }

        if (choice == static_cast<RPS>(1))
        {
            cout << "Rack" << endl;
        }
        else if (choice == static_cast<RPS>(2))
        {
            cout << "Paper" << endl;
        }
        else if (choice == static_cast<RPS>(3))
        {
            cout << "Scissor" << endl;
        }
    }
    return 0;
}