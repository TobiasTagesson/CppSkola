#ifndef __STUDENTS_H
#define __STUDENTS_H
#include <string>
#include <vector>
  

class Student{
private:
    std::string name;
public:
    Student(std::string name = "Unknown");
    std::string getName();
};

class Rectangle {
public:
    double length;
    double width;
    double calculateArea(double length, double width) { return length * width; };
    Rectangle();
    Rectangle(double length, double width);
    Rectangle(double bothLengthAndWidth);

};


enum transactionType {
    withdrawal,
    deposit
};

class Transaction {

public:
    double amount;
    void add(double amount);
    transactionType type;
    Transaction(double amount, transactionType type);

    
};


class BankAccount {

private:
    int accountNumber;
    double balance;

public:
    std::vector<Transaction> transactions;
    BankAccount(int accountNumber);
    void makeTransaction(Transaction transaction);
    void add(double amount);
    void withdraw(double amount);
    double checkBalance() { return balance; };
    double getBalance();
   

};


void run_students();
void run_rectangle();
void run_bankaccount();

#endif // __STUDENTS_H