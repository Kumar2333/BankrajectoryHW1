#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance = 0)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance = balance + amount;
        else
            cout << "Invalid deposit amount." << endl;
    }

    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            return true;
        }

        return false;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account(100);

    cout << "Initial balance: RM " << account.getBalance() << endl;

    account.deposit(50);
    cout << "After deposit: RM " << account.getBalance() << endl;

    bool success = account.withdraw(30);

    if (success)
        cout << "Withdrawal successful." << endl;
    else
        cout << "Withdrawal failed." << endl;

    cout << "Final balance: RM " << account.getBalance() << endl;

    // Cannot access account.balance directly because it is private

    return 0;
}
