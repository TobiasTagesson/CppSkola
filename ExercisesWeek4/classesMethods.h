#ifndef __CLASSESMETHODS_H
#define __CLASSESMETHODS_H
#include <string>
#include <ctime>

namespace classesmethods {

    class Person {

    private:
        std::time_t birthDate;
        std::string firstName;
        std::string lastName;
        std::string streetAddress;
        int postalCode;
        std::string city;
    public:
        Person(std::time_t birthDate);
        void setName(std::string firstName, std::string lastName);
        void setAddress(std::string streeAddress, int postalCode, std::string city);
        void moveInto(const Person &person);
        std::string getName();
        std::string getStreet();

    };
}

void run_classesmethods();


#endif // __CLASSESMETHODS_H