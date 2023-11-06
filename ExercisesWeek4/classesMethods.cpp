#include "classesMethods.h"
#include <iostream>

namespace classesmethods {

    Person::Person(std::time_t birthDate):
    birthDate(birthDate)
    {

    }
        void Person::setName(std::string firstName, std::string lastName) {
            
            this->firstName = firstName;
            this->lastName = lastName;
        }

        void Person::setAddress(std::string streetAddress, int postalCode, std::string city) {
            this->streetAddress = streetAddress;
            this->postalCode = postalCode;
            this->city = city;
        }

        void Person::moveInto(const Person &person) {
            this->streetAddress = person.streetAddress;
            this->postalCode = person.postalCode;
            this->city = person.city;

        }

        std::string Person::getName() {
            return this->firstName;
        }

        std::string Person::getStreet() {
            return this->streetAddress;
        }
    
}

void run_classesmethods() {

    classesmethods::Person person1(19780312);
    classesmethods::Person person2(1980429);

    person1.setName("Ernst", "Rolf");
    person2.setName("Birgit", "Bardot");
    person1.setAddress("Nygatan 3", 12345, "Hjo");
    person2.moveInto(person1);

    std::cout << person1.getName() << " " << person1.getStreet() << std::endl;
    std::cout << person2.getName() << " " << person2.getStreet() << std::endl;


}