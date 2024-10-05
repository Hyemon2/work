#include <iostream>
#include "account.h"
#include <string>

using namespace std;
using Bank::Account;


Account::Account(string n, int bal) : name(n), balance(bal) {}  // 생성자 정의

Account::~Account() {}  // 소멸자 정의

void Account::deposit(int m) {
    if (m < 0) {
        cout << "입금액은 0 이상이어야 합니다." << endl;
        return;
    }
    balance += m;
}

string Account::getOwner() const {  // 예금주 반환 함수 정의
    return name;
}

int Account::check() const {  // 잔액 조회 함수 정의
    return balance;
}

int Account::withdraw(int m) {
    if (m < 0) {
        cout << "출금액은 0 이상이어야 합니다." << endl;
        return 0;
    }
    if (balance >= m) {
        balance -= m;
        return m;
    }
    cout << "잔액이 부족합니다." << endl;
    return 0;  // 잔액 부족 시 0 반환
}