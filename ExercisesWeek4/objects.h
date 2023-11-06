#if !defined __OBJECTS_H
#define __OBJECTS_H

#include <string>
namespace objects {


    class Student {
            
        private:
            std::string firstName;
            std::string lastName;
            std::string nameOfSchool;
        public:
            Student(std::string firstName, std::string lastName, std::string nameOfSchool);
            void setSchool(std::string name);
            std::string getSchool();
            std::string getFirstName();
            std::string getLastName();
        };
}
void run_objects3();
void run_objects4();

#endif // __OBJECTS_H