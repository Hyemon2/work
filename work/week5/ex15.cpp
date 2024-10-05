#include <iostream>
using namespace std;

class Account {
    int balance;  // 잔액
public:
    // 생성자
    Account(int deposit) : balance(deposit) { }

    // 현재 잔액 반환
    int getBalance() { return balance; }

    // 잔액 설정
    void setBalance(int deposit) { this->balance = deposit; }

    // 잔액 출력
    void show() {
        cout << "잔액은 " << balance << "원 입니다." << endl;
    }
};

// increaseBy() 함수 정의
void increaseBy(Account& acc, int amount) {
    int currentBalance = acc.getBalance();  // 현재 잔액 가져오기
    acc.setBalance(currentBalance + amount);  // 잔액에 입금액 추가
}

int main() {
    cout<<"20235189 서혜원"<<endl;
    Account acc(500);  // 500원을 초기 잔액으로 설정
    cout << "입금 전 "; 
    acc.show();  // 입금 전 잔액 출력

    int in;
    cout << "입금액 : "; 
    cin >> in;  // 입금액 입력 받기

    increaseBy(acc, in);  // 입금 처리

    cout << "입금 후 "; 
    acc.show();  // 입금 후 잔액 출력
}