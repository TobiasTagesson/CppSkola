#include "students.h"
#include <iostream>
#include <string>
#include <vector>


Student::Student(std::string name):name(name)
{

}

std::string Student::getName() {
    return name;
}

Rectangle::Rectangle()
{
    width = 0;
    length = 0;
}
Rectangle::Rectangle(double length, double width):
length(length), width(width)
{

}
Rectangle::Rectangle(double bothLengthAndWidth)
{
    width = bothLengthAndWidth;
    length = bothLengthAndWidth;
}

void printStudents(std::vector<Student> &students) {
  for (auto &s : students) {
        std::cout << s.getName() << std::endl;
    }
}

void printRectangles(std::vector<Rectangle> &rectangles) {
    for (auto &r : rectangles) {
        std::cout << r.calculateArea(r.length, r.width) << std::endl;
    }
}

void run_students() {

    std::vector<Student> students;
  
    students.push_back(Student("Traste"));
    students.push_back(Student());
    students.push_back(Student("Bosse"));
    printStudents(students);
}

void run_rectangle() {
    std::vector<Rectangle> rectangles;
    rectangles.push_back(Rectangle());
    rectangles.push_back(Rectangle(1.1, 5.0));
    rectangles.push_back(Rectangle(2.2));
    printRectangles(rectangles);

}

BankAccount::BankAccount(int accountNumber):accountNumber(accountNumber)
{

}

void BankAccount::makeTransaction(Transaction transaction) {

    if (transaction.type == transactionType::deposit){
        add(transaction.amount);
    }
    else if (transaction.type == transactionType::withdrawal) {

        if (transaction.amount > balance) {
            std::cout << "Not enough money" << std::endl;
            return;
        }
        else {
            withdraw(transaction.amount);
        }
    }
        transactions.push_back(transaction);

}

void BankAccount::add(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    balance -= amount;
}

double BankAccount::getBalance() {
    double balance;
    for (auto &i : transactions) {
        if (i.type == transactionType::deposit) {
            balance += i.amount;
        }
        else if (i.type == transactionType::withdrawal) {
            balance -= i.amount;
        }
    }
    return balance;
}

Transaction::Transaction(double amount, transactionType type):
amount(amount), type(type)
{
    
}

void run_bankaccount() {

    BankAccount account1 (123456);
    account1.makeTransaction(Transaction(200, transactionType::deposit));
    account1.makeTransaction(Transaction(500, transactionType::deposit));
    account1.makeTransaction(Transaction(300, transactionType::withdrawal));
    account1.makeTransaction(Transaction(800, transactionType::withdrawal));

    std::cout << "-------------------" << std::endl;
    std::cout << "Balance: " << account1.getBalance() << std::endl;
    std::cout << "-------------------" << std::endl;
    BankAccount account2 (654321);
    account2.makeTransaction(Transaction(600, transactionType::deposit));
    account2.makeTransaction(Transaction(100, transactionType::withdrawal));
    std::cout << "Balance " << account2.getBalance() << std::endl;
}