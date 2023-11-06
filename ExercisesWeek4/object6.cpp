#include "object6.h"
#include <iostream>
//#include <string>

//namespace object6 {

    Dog registerDog() {
        Dog dog;
        std::cout << "Name: ";
        std::cin >> dog.name;
        std::cout << "Breed: ";
        std::cin >> dog.breed;
        std::cout << "Age: ";
        std::cin >> dog.age;
        std::cout << "Weight: ";
        std::cin >> dog.weight;
        return dog;
    }

    void printDogs(std::vector<Dog> &dogs) {
        std::cout << "MINA HUNDAR" << std::endl;

        for (auto &dog : dogs) {
            std::cout << dog.name << " " << dog.weight << " " << dog.breed << " " << dog.age << std::endl;
        }
    }
    float calculateTailLength(const Dog &dog) {
        
            float dogsTailLength;
            if (dog.breed == "Basset") {
                dogsTailLength = 3.7;
            }
            else {
             dogsTailLength = dog.age * dog.weight / 10; 
            }
            return dogsTailLength;
    }

    void printDogsWithTailLengthLongerThanUserInput(const float &minTailLength, const std::vector<Dog> &dogs) {
        
        std::cout << "Dogs with tail length over: "  << minTailLength << std::endl;
        for (auto &dog : dogs) {
        
            float dogsTailLength = calculateTailLength(dog);
          //  std::cout << dog.name << " " << dogsTailLength << std::endl;

            if (dogsTailLength > minTailLength) {
                std::cout << dog.name << " " << dogsTailLength << std::endl;
            }
        }
    }
    void searchDogs(std::vector<Dog> &dogs) {

        int minTailLength;
        std::cout << "Enter min length of tail: " << std::endl;
        std::cin >> minTailLength;
        printDogsWithTailLengthLongerThanUserInput(minTailLength, dogs);

    }

    void removeDog(std::vector<Dog> &dogs) {
            
            bool found = false;
            std::string name;
            std::cout << "Enter name of dog to remove: ";
            std::cin >> name;

            for (int i = 0; i < dogs.size(); i++){
                if(dogs[i].name == name) {
                    std::cout << "Found" << dogs[i].name << std::endl;
                    dogs.erase(dogs.begin() + i);
                    found = true;
                }
            }

            if (!found) {
                std::cout << "Dog not found" << std::endl;
            }

    }

    int menuSelection() {
        int value;
        std::cin >> value;
        if(value <= 1 && value >= 4) {
            return value;
        }
    }

    void printMenu() {
        std::cout << "1: Register dog " << std::endl;
        std::cout << "2: Search with tail length " << std::endl;
        std::cout << "3: Remove dog " << std::endl;
        std::cout << "4: Quit " << std::endl;
    }

    void mainMenu() {
        std::vector<Dog> dogs;
        bool quit = false;

        while(!quit) {
            printMenu();
            int selection = menuSelection();
            
            switch (selection)
            {
                case 1:
                    dogs.push_back(registerDog());
                    printDogs(dogs);
                    break;
                case 2: 
                    searchDogs(dogs);
                    break;
                case 3:
                    removeDog(dogs);
                    printDogs(dogs);
                    break;
                case 4:
                    quit = true;
                    break;
                default:
                    break;
            }
        }
    }

void run_object6() {
    mainMenu();
}