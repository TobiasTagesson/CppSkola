#include <iostream>
#include <cstdlib>
#include <ctime>


void generateAndPrintRandomNumber()
 {
    std::cout << (rand() % 6 + 1) << std::endl;
 }

void validatePlaceOfDot(std::string email)
{
    // get position of the last dot
     int position = email.find_last_of('.');

     // get what's AFTER the dot (hence the +1)
     int suffixLength = email.substr(position + 1).length();

    // the suffix has to be 2 or 3 characters long
    if (suffixLength < 4 && suffixLength > 1)
     {
        std::cout << "Valid" << std::endl;
     }
     else
     {
        std::cout << "Not Valid pga punkt " << std::endl;
     }

}
 void validateEmail(std::string email)
 {
        // the @ or . can't be first in the address
        if (email[0] == '@' || email[0] == '.')
        {
            std::cout << "Not valid" << std::endl;
        } 
        // check of the address contains both @ and .
        else if (email.find('@') != std::string::npos && email.find('.') != std::string::npos)
        {
            validatePlaceOfDot(email);
        }
        else
        {
            std::cout << "Not valid " << std::endl;
        }
   // }
 }

std::string makeLowerCaseAndRemoveWhiteSpaces(std::string theWord)
{
    // remove whitespaces
    theWord.erase(remove_if(theWord.begin(), theWord.end(), isspace), theWord.end());
    // to lower
    transform(theWord.begin(), theWord.end(), theWord.begin(), ::tolower);

    return theWord;
}



int main() {
   
// IF EXERCISES
//-------------------------------------------------------------
// IF Exercise 1:

/*    
    int userInput;
    std::cout << "Enter number: ";

    std::cin >> userInput;

    if (userInput > 10)
    {
        std::cout << "More than 10" << std::endl;
    }
    else if (userInput < 10)
    {
        std::cout << "Less than 10" << std::endl;
    }
    else
    {
        std::cout << "Number is 10" << std::endl;
    } */



    
// IF Exercise 2:

/* 
    int userInput;

    std::cout << "How many packages of milk do we have left? ";
    std::cin >> userInput;

    if (userInput < 10)
    {
        std::cout << "Order 30 packages" << std::endl;
    }
    else if (userInput >= 10 &&  userInput<= 20)
    {
        std::cout << "Order 20 packages" << std::endl;
    }
    else 
    {
        std::cout << "No need to order any milk" << std::endl;   
    } */

// IF Exercise 3:

    /* double temperature;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    if (temperature > 38.8 && temperature < 39.5)
    {
        std::cout << "You've got a fever." << std::endl;
    }
    else if (temperature >= 39.5)
    {
        std::cout << "See a doctor." << std::endl;
    }
    else
    {
        std::cout << "No fever." << std::endl;
    } */


// IF Exercise 4:

    /* int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18)
    {
        std::cout << "You are not an adult" << std::endl;
    }
    else if (age > 65)
    {
        std::cout << "You are retired" << std::endl;
    }
    else
    {
        std::cout << "You are an adult" << std::endl;
    } */

// IF Exercise 4:

    /* std::string category;

    std::cout << "Choose your category: \n"
    "A for Adult \n"
    "R for Retired \n"
    "S for Student";

    std::getline(std::cin, category); 

   if (category == "A" || category == "a")
   {
        std::cout << "The trip costs 30:-" << std::endl;
   }
   else if (category == "R" || category == "r" || category == "S" || category == "s")
   {
        std::cout << "The trip costs 20:-" << std::endl;
   }
   else
   {
        std::cout << "Wrong category" << std::endl;
   }
 */


// IF Exercise 6:

    /* std::string country;

    std::cout << "What country do you live in? ";
    std::getline(std::cin, country);
    
    for (auto& x : country)
    {
        x = tolower(x);
    }

    if (country == "sweden" || country == "denmark" || country == "norway")
    {
        std::cout << "You're scandinavian." << std::endl;
    }
    else
    {
        std::cout << "You don't live in scandinavia." << std::endl; 
    }
 */

// IF Exercise 7: 

   /*  int amount;

    char userDiscount;

    std::cout << "How much money do you have? ";
    std::cin >> amount;

    std::cout << "Do you have a discount: Y/N? ";
    std::cin >> userDiscount;
    userDiscount = std::tolower(userDiscount);


    if (amount >= 15 && amount <= 25 && userDiscount == 'n')
    {
        std::cout << "You can buy a small hamburger." << std::endl;
    }
    else if (amount >= 15 && amount <= 25 && userDiscount == 'y')
    {
        std::cout << "You can buy a small hamburger and fries. " << std::endl;
    }
    else if (amount > 25 &&  amount <= 50 && userDiscount == 'n')
    {
        std::cout << "You can buy a large hamburger." << std::endl;
    }
    else if (amount > 25 && amount <= 50 && userDiscount == 'y')
    {
        std::cout << "You can buy a large hamburger and fries." << std::endl;
    }
    else if ((amount > 50 && amount < 60 && userDiscount == 'y') || amount >= 60)
    {
        std::cout << "You can buy a meal with a drink" << std::endl;
    }
    else
    {
        std::cout << "You can go home" << std:: endl;
    } */


// LOOPS EXERCISES
//------------------------------------------------------------

// LOOP Exercise 1:

    /* std::cout << "For loop: " << std::endl;

    for (int i = 0; i <= 10; i++)
    {
        std::cout << i << std::endl;
    }

    std::cout << "While loop" << std::endl;

    int x = 0;
    while(x <= 10)
    {
        std::cout << x << std::endl;
        x++;
    } */


 // LOOP Exercise 2:

   /*  int a, b;

    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter one more: ";
    std::cin >> b;

    if (a < b)
    {
        std::cout << "For loop: " << std::endl;
        for (int i = a + 1; i < b; i++)
        {
            std::cout << i << std::endl;
        }

        std::cout << "While loop: " << std::endl;
        int i = a + 1;
        while (i < b)
        {
            std::cout << i << std::endl;
            i++;
        }
    }

    else
    {
        std::cout << "For loop 2: " << std::endl;

        for (int i = a - 1; i > b; i--)
        {
            std::cout << i << std::endl;
        }

        std::cout << "While loop 2: " << std::endl;
        int i = a - 1;
        while (i > b)
        {
            std::cout << i << std::endl;
            i--;
        }

    } */

// LOOP Exercise 3:


/*     int a, b;
    bool programRun = true;
    char exit;

    while(programRun)
    {
        std::cout << "Enter a number: ";
        std::cin >> a;
        std::cout << "Enter one more number: ";
        std::cin >> b;

        std::cout << "The sum is: " << a + b << std::endl;
        std::cout << "Do you want to continue Y/N?" << std::endl;
        
        std::cin >> exit;

        if (exit == 'N' || exit == 'n')
        {
            programRun = false;
        }
    } */

// LOOP Exercise 4:

   /*  int numberArr[10];
    int sum = 0;

    for (int i = 0; i < sizeof(numberArr) / sizeof(int); i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> numberArr[i];
        sum += numberArr[i];
    }

    std::cout << "The sum is: " << sum << std::endl; */


// LOOP Exercise 5:
/* 
    bool continuePlaying = true;
    char answer;

    std::cout << "Rolling the dices: " << std::endl;
    std::cout << "The values are: " << std::endl;;

    srand(time(NULL));

    generateAndPrintRandomNumber();
    generateAndPrintRandomNumber();
    
    while(continuePlaying)
    {
        std::cout << "Roll the dices again Y/N?: " << std::endl;
        std::cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            std::cout << "The values are: " << std::endl;
            generateAndPrintRandomNumber();
            generateAndPrintRandomNumber();
        }
        else
        {
            continuePlaying = false;
        }
    } */

// STRING EXERCISES
//----------------------------------------------------------

// String Exercise 1:

/* std::string a, b, c;

    std::cout << "Enter string 1: ";
    getline(std::cin, a);
    std::cout << "Enter string 2: ";
    getline(std::cin, b);
    std::cout << "Enter string 3: ";
    getline(std::cin, c);

    std::cout << a << " " << b << " " << c << std::endl; */

// String Exercise 2:

   /*  std::string userInput;
    int position;

    std::cout << "Enter string: ";
    std::getline(std::cin,userInput);
    position = userInput.find("s");
    if (position != std::string::npos)
        std::cout << "Position is: " << position << std::endl;
     else
        std::cout << "not found." << std::endl; */

// String Exercise 3:

    /* std::string name;

    std::cout << "Enter full name: ";
    getline(std::cin, name);
  
    name[0] = toupper(name[0]);
    for(unsigned int i = 0; i < name.length(); i++)
    {
        if (isspace(name[i]))
        {
            name[i+1] = toupper(name[i + 1]);
        }
    }

    std::cout << name << std::endl;
 */



// String Exercise 4:

   /*  std::string userInput;

    std::cout << "Enter text: ";
    getline(std::cin, userInput);
    int sum = 0;

    for (int i = 0; i < userInput.length(); i++)
    {
        if(isspace(userInput[i]))
        {
            userInput[i] = '*';
            sum++;
        }
    }

    std::cout << userInput << std::endl;
    std::cout << "There are " << sum << " occurances of *"; */


// String Exercise 5: 

    /* std::string email;

    std::cout << "Enter email: ";
    getline(std::cin, email);

    validateEmail(email); */


// String Exercise 6:

  /*   std::string words;
    int numOfWords = 0;
    
    std::cout << "Enter a sentence: ";
    getline(std::cin, words);

    for (int i = 0; i < words.length(); i++)
    {
        if (words[i] == ' ')
        {
            numOfWords++;
        }
    }
    numOfWords += 1; // one word after the last space. Maybe I should put the words in a list instead, for more accurate counting??
    std::cout << "Num of words are: " << numOfWords << std::endl; */


// String Exercise 7:

    std::string theText, theTextEdited, theTextBackwardsEdited;

    std::cout << "Enter text: ";
    getline(std::cin, theText);

    theTextEdited = makeLowerCaseAndRemoveWhiteSpaces(theText);

    theTextBackwardsEdited = theTextEdited;
    
    reverse(theTextBackwardsEdited.begin(), theTextBackwardsEdited.end());

    if (theTextBackwardsEdited == theTextEdited)
    {
        std::cout << theText << " IS a palidrome" << std::endl;
    }
    else
    {
        std::cout << theText << " is NOT a palindrome" << std::endl;
    }

    return 0;
}