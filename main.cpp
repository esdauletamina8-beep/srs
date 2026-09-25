#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;

public:
    BankAccount(string number) {
        accountNumber = number;
    }

    bool operator==(const BankAccount& other) {
        return accountNumber == other.accountNumber;
    }
};

int main() {
    BankAccount account1("KZ123456");
    BankAccount account2("KZ123456");
    BankAccount account3("KZ987654");

    if (account1 == account2) {
        cout << "1-shot pen 2-shot ten." << endl;
    } else {
        cout << "1-shot pen 2-shot ten emes." << endl;
    }

    if (account1 == account3) {
        cout << "1-shot pen 2-shot ten." << endl;
    } else {
        cout << "1-shot pen 2-shot ten emes." << endl;
    }

    return 0;
}
