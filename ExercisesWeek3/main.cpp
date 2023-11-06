#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>

std::string getAgeMessage(int yearOfBirth) {
    
    if (yearOfBirth < 1973) {
        return "Don't worry, you're still young";
    }
    else if (yearOfBirth == 1973) {
        return "You're the same age as Foppa";
    }
    else {
        return "You are younger than the programming language C";
    }
}

std::string generateName(std::string firstName, std::string lastName) {

    return firstName + " " + lastName;
}

int countNumbers(std::string userInput) {

    int count = 0;
    for (char ch : userInput)
    {
        if (isdigit(ch))
        {
            count++;
        }
    }
    
    return count;
}


bool isWoman(std::string personalNumber) {

    int indexOfSecondLastNumber = personalNumber.length() - 2; // find index of the second last
    int secondLastNo = int(personalNumber[indexOfSecondLastNumber] - 48); // convert second last from char to int

    return (secondLastNo % 2 == 0) ? true : false;
}

std::tuple<std::string, int> findLongestWord(std::string words[], int noOfWords) {
//std::string findLongestWord(std::vector<std::string> words, int noOfWords){

    std::string longestWord = "";

    /* for (auto word : words)
    {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    } */

    for (int i = 0; i < noOfWords; i++)
    {
        if (words[i].length() > longestWord.length()) {
            longestWord = words[i];
        }
    }

    return std::make_tuple (longestWord, longestWord.length());
}


int main() {

// FUNCTIONS------------------------------------------

// Exercise 1:

    /* int yearOfBirth;
    std::cout << "Enter year of birth: ";
    std::cin >> yearOfBirth;
    std::cout << getAgeMessage(yearOfBirth) << std::endl; */


// Exercise 2:

    /* std::string firstName, lastName, fullName;

    std::cout << "Enter first name: ";
    getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    getline(std::cin, lastName);

    fullName = generateName(firstName, lastName);
    std::cout << "Your name is: " << fullName << std::endl; */

// Exercise 3:

    /* std::string userInput;
    int numberOfDigits;

    std::cout << "Enter a word with som numbers in it";
    getline(std::cin, userInput);

    numberOfDigits = countNumbers(userInput);

    std::cout << numberOfDigits << std::endl; */

// Exercise 4:

/*     bool isThisAWoman;
    isThisAWoman = isWoman("198010102434");

    if (isThisAWoman) {
        std::cout << "Woman!" << std::endl;
    }
    else {
        std::cout << "Man!" << std::endl;
    } */


// Exercise 5:
    
   // std::vector<std::string> words { "apple", "banana", "pear", "pineapple", "kiwi"};
    std::string words[5] {"apple", "banana", "pear", "pineapple", "kiwi"};
    int noOfLetters;
    std::string longestWord;
    tie (longestWord, noOfLetters) = findLongestWord(words, 5);

    std::cout << longestWord << " consists of " << noOfLetters << " letters"  << std::endl;

    return 0;
}