#include "objects.h"
#include <iostream>
#include <string>
#include <vector>

 enum DishType {
        Vegetarian,
        Fish,
        Meat

    };


class Dish {
public:
    std::string name;
    float price;
    int nrOfCalories;
    DishType type;

    Dish(std::string name, float price, int nrOfCalories, DishType type):
     name(name), price(price), nrOfCalories(nrOfCalories), type(type)
     {

     }

};




void run_objects3() {

    std::vector<Dish> lunchMenu;

    lunchMenu.push_back(Dish("Meatballs", 139, 500, Meat));
    lunchMenu.push_back(Dish("Veggie lasagne", 129, 300, Vegetarian));
    lunchMenu.push_back(Dish("Salmon", 149, 400, Fish));

    std::cout << "Today's lunch!" << std::endl;

    for (auto &dish : lunchMenu) {
        
        std::cout << dish.name << " " << dish.price << ":-" << std::endl;
    }
}

namespace objects {
    


    Student::Student(std::string firstName, std::string lastName, std::string nameOfSchool):
    firstName(firstName), lastName(lastName), nameOfSchool(nameOfSchool)
    {

    }

    void Student::setSchool(std::string school) {
        this->nameOfSchool = school;
    }
    std::string Student::getFirstName() {
        return firstName;
    }
    std::string Student::getLastName() {
        return lastName;
    }
    std::string Student::getSchool() {
        return nameOfSchool;
    }
};

void run_objects4() {

    std::vector<objects::Student> students;

    students.push_back(objects::Student("Evert", "Taube", "YA"));
    students.push_back(objects::Student("Rafael", "Nadal", "STU"));
    students.push_back(objects::Student("Selma", "Lagerloef", "Kungaskolan"));

    for (auto &student : students)
    {
        std::cout << student.getFirstName() << " ";
        std::cout << student.getLastName() << " ";
        std::cout << student.getSchool() << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;
    students[2].setSchool("Drottningaskolan");

   for (auto &student : students)
    {
        std::cout << student.getFirstName() << " ";
        std::cout << student.getLastName() << " ";
        std::cout << student.getSchool() << std::endl;
    }

}


