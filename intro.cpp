#include <iostream>

void standardIO()
{
    [[maybe_unused]] double PI = 3.14159;
    int x {};
    int y {};
    std::cout << "Enter a value for X: ";
    std::cin >> x;                                          // Faulty inputs handled in 9.5

    std::cout << "Enter a value for Y: ";
    std::cin >> y;                                          // If "5a" is entered 5 will be accepted to y and "a\n" will remain in buffer :(

    std::cout << "X = " << x << "\nY = " << y << "\n";

    int z { 5 };
    std::cout << z << "\n";
}
void multiplyByTwo()
{
    int x {};

    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double that number is: " << x * 2 << "\n";
}
void question5_7_1()
{
    std::cout << "Enter your full name: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;
    int nameLen { static_cast<int>(name.length()) }; // get number of chars in name (including spaces)
    std::cout << "Your age + length of name is: " << age + nameLen << '\n';
}
void question5_x_4()
{
    std::cout << "Enter the name of person #1: ";

    std::string name1 {};
    std::getline(std::cin >> std::ws, name1);

    std::cout << "Enter the age of " << name1 << ": ";

    int age1 {};
    std::cin >> age1;

    std::cout << "Enter the name of person #2: ";

    std::string name2 {};
    std::getline(std::cin >> std::ws, name2);

    std::cout << "Enter the age of " << name2 << ": ";

    int age2 {};
    std::cin >> age2;

    std::string comparison {};
    if (age1 < age2)
        comparison = "younger";
    else
        comparison = "older";

    std::cout << name1 << " (age " << age1 << ") is " << comparison << " than " << name2 << " (age " << age2 << ").";
}