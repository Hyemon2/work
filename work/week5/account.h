#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using std::string;


namespace Bank
{
    enum class MENU
    {
        DEPOSIT = 1,
        WITHDRAW,
        CHECK,
        QUIT
    };

    class Account
    {
        string name;
        int balance;
    public :
        Account(string n, int bal);
        ~Account();
        void deposit(int m);
        string getOwner() const;
        int check() const;
        int withdraw(int m);  
    };
}

#endif // ACCOUNT_H