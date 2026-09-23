// Concept 13: Friend Class
// Aim: To demonstrate access to private data using a friend class.

#include <iostream>

class Account {
private:
    double balance;
    friend class Auditor;

public:
    explicit Account(double initialBalance) : balance(initialBalance) {}
};

class Auditor {
public:
    void inspect(const Account& account) const {
        std::cout << "Account Balance: " << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);
    Auditor auditor;
    auditor.inspect(account);
    return 0;
}

/*
Expected Output:
Account Balance: 5000

Key learning: A friend class can access private data, but friendship should
be used only when there is a clear design reason.
*/
