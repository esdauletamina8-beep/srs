#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    string accountNumber;
    double balance;

public:
    BankAccount(string n, string num, double b) {
        name = n;
        accountNumber = num;
        balance = b;
    }

    void showInfo() {
        cout << "Owner: " << name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Amina", "KZ123456", 10000);

    account.showInfo();

    return 0;
}
