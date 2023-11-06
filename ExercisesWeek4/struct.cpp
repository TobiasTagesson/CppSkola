#include "struct.h"
#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string firstName;
    std::string lastName;
    int birthYear;
    std::string city;
};

void addStudent(Student *s) {
    std::cout << "First name: ";
    std::cin >> s->firstName;
    std::cout << "Last name: ";
    std::cin >> s->lastName;
    std::cout << "Birth year: ";
    std::cin >> s->birthYear;
    std::cout << "City: ";
    std::cin >> s->city;
}

void addStudent(Student &s) {
    
    std::cout << "First name: ";
    std::cin >> s.firstName;
    std::cout << "Last name: ";
    std::cin >> s.lastName;
    std::cout << "Birth year: ";
    std::cin >> s.birthYear;
    std::cout << "City: ";
    std::cin >> s.city;
   
}

void printStudent(const Student *s) {
    std::cout << s->firstName << " ";
    std::cout << s->lastName << " ";
    std::cout << s->birthYear << " ";
    std::cout << s->city << std::endl;
}

void printStudent(const Student &s) {
    std::cout << s.firstName << " ";
    std::cout << s.lastName << " ";
    std::cout << s.birthYear << " ";
    std::cout << s.city << std::endl;
}

void printOldest(Student students[], int count){

    Student oldestStudent;
    oldestStudent.birthYear = INT_MAX;
    for(int i = 0; i < count; i++) {
        if(students[i].birthYear < oldestStudent.birthYear)
        {
            oldestStudent = students[i];
        }
    }
    std::cout << "the oldest is " << oldestStudent.firstName << ", born in " << oldestStudent.birthYear << std::endl;

}


void run_struct1() {
    Student student1;
    Student student2;
    //addStudent(&student1);
    //addStudent(&student2);
    //printStudent(&student1);
    //printStudent(&student2);

    addStudent(student1);
    addStudent(student2);
    printStudent(student1);
    printStudent(student2);
}

void run_struct2() {

    Student students[10];
    int count = 0;
    char continueAdding;
    bool menu = true;
    
    //for (int i = 0; i < 10; i++) {
    while(menu){
        
        addStudent(students[count]);   
        count++;

        std::cout << count << " students added" << std::endl;

        if(count < 10){
            std::cout << "Enter one more? Y/N? " << std::endl;
            std::cin >> continueAdding;
 
            if(tolower(continueAdding) == 'n') {
                printOldest(students, count);
                menu = false;
            }
        }
        else{
            printOldest(students, count);
            menu = false;
        }
    }
}
