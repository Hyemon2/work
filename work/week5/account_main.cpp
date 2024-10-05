#include <iostream>
#include "account.h"
#include <string>
#include <limits> // numeric_limits 사용

using namespace std;
using Bank::Account;
using Bank::MENU;

int main() {
    Account a("C++", 0);
    int menu, money;

    do {
        cout << "--------------------------------------------" << endl;
        cout << "menu : 1. 입금, 2. 출금, 3. 조회, 4. 종료 >> ";
        cin >> menu;

        // 입력 값이 정수가 아닐 경우를 처리
        if (cin.fail()) {
            cin.clear(); // 오류 상태를 지웁니다.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 남아 있는 입력을 무시합니다.
            cout << "잘못된 입력입니다. 숫자를 입력하세요." << endl;
            continue; // 다시 메뉴를 입력받도록 함
        }

        // 잘못된 메뉴 입력 처리
        if (menu < 1 || menu > 4) {
            cout << "잘못된 메뉴입니다. 1~4 사이의 값을 입력하세요." << endl;
            continue;  // 다시 메뉴를 입력받도록 함
        }

        if (menu == static_cast<int>(MENU::QUIT)) {
            break;
        }

        switch (menu) {
            case static_cast<int>(MENU::DEPOSIT):
                cout << "입금액 >> ";
                cin >> money;

                // 입력 값이 정수가 아닐 경우를 처리
                if (cin.fail()) {
                    cin.clear(); // 오류 상태를 지웁니다.
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 남아 있는 입력을 무시합니다.
                    cout << "잘못된 입력입니다. 숫자를 입력하세요." << endl;
                    continue; // 다시 입력을 받도록 함
                }

                if (money < 0) {
                    cout << "입금액은 0 이상이어야 합니다." << endl;
                } else {
                    a.deposit(money);
                    cout << a.getOwner() << "의 입금액은 " << money << endl;
                    cout << a.getOwner() << "의 잔액은 " << a.check() << endl;
                }
                break;

            case static_cast<int>(MENU::WITHDRAW):
                cout << "출금액 >> ";
                cin >> money;

                // 입력 값이 정수가 아닐 경우를 처리
                if (cin.fail()) {
                    cin.clear(); // 오류 상태를 지웁니다.
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 남아 있는 입력을 무시합니다.
                    cout << "잘못된 입력입니다. 숫자를 입력하세요." << endl;
                    continue; // 다시 입력을 받도록 함
                }

                if (money < 0) {
                    cout << "출금액은 0 이상이어야 합니다." << endl;
                } else {
                    int withdrawn = a.withdraw(money);
                    if (withdrawn > 0) {
                        cout << a.getOwner() << "의 출금액은 " << withdrawn << endl;
                    } else {
                        cout << "잔액이 부족합니다." << endl;
                    }
                    cout << a.getOwner() << "의 잔액은 " << a.check() << endl;
                }
                break;

            case static_cast<int>(MENU::CHECK):
                cout << a.getOwner() << "의 잔액은 " << a.check() << endl;
                break;

            default:
                cout << "잘못된 선택입니다." << endl;
        }
    } while (true);

    return 0;
}