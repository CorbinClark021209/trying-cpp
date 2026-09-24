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
namespace Questions
{
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
    constexpr bool isEven(int n)
    {
        return (n % 2) == 0;
    }
    void question6_3_2()
    {
        std::cout << "Enter an integer: ";

        int x {};
        std::cin >> x;

        std::cout << "The integer " << x << " is " << (isEven(x) ? "EVEN" : "ODD") << ".\n";
    }
    std::string_view getQuantityPhrase(int quantity)
    {
        if (quantity < 0) {
            return "negative";
        }
        switch (quantity) {
            case 0:
                return "no";
            case 1:
                return "a single";
            case 2:
                return "a couple of";
            case 3:
                return "a few";
            default:
                return "many";
        }
    }
    std::string_view getApplesPluralized(int quantity)
    {
        return (quantity == 1) ? "apple" : "apples";
    }
    void question6_x_1()
    {
        constexpr int maryApples { 3 };
        std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

        std::cout << "How many apples do you have? ";
        int numApples{};
        std::cin >> numApples;

        std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";
    }
    void question7_3_1()
    {
        std::cout << "Enter an integer: ";

        int smaller {};
        std::cin >> smaller;

        std::cout << "Enter a larger integer: ";

        int larger {};
        std::cin >> larger;

        if (smaller > larger) {
            std::cout << "Swapping the values\n";

            int swap {larger};
            larger = smaller;
            smaller = swap;
        } // swap variable dies

        std::cout << "The smaller value is " << smaller << "\n";
        std::cout << "The larger value is " << larger << "\n";
    } // smaller, larger variables die
    int question7_x_3(int x)
    {
        static int total { 0 };
        total += x;
        return total;
    }
    int question8_6_1(int a, int b, char op)
    {
        switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '%':
            return a % b;
        default:
            std::cout << "calculate(): Unhandled case\n";
            return 0;
        }
    }
    void question8_8_2()
    {
        char character = 'a';
        while (character <= 'z') {
            std::cout << character << ": " << static_cast<int>(character) << "\n";
            character++;
        }
    }
    void question8_8_3()
    {
        int outer{ 5 };
        while (outer >= 1)
        {
            int inner{ outer };
            while (inner >= 1)
            {
                std::cout << inner << ' ';
                --inner;
            }

            std::cout << '\n';
            --outer;
        }
    }
    void question8_8_4()
    {
        int outer{ 1 };
        while (outer <= 5)
        {
            int inner{ 5 };
            while (inner >= 1)
            {
                if (inner > outer) {
                    std::cout << "  ";
                }
                else {
                    std::cout << inner << ' ';
                }
                --inner;
            }

            std::cout << '\n';
            ++outer;
        }
    }
    void question8_10_1()
    {
        for (int i { 0 }; i <= 20; i += 2) {
            std::cout << i << " ";
        }
    }
    int question8_10_2(int value)
    {
        int total { 0 };
        for (int i { 1 }; i <= value; ++i) {
            total += i;
        }
        return total;
    }
    void question8_10_4(int number)
    {
        for (int n { 1 }; n <= number; ++n) {
            if (n % 3 == 0 && n % 5 == 0) {
                std::cout << "fizzbuzz\n";
            }
            else if (n % 3 == 0) {
                std::cout << "fizz\n";
            }
            else if (n % 5 == 0) {
                std::cout << "buzz\n";
            }
            else {
                std::cout << n << "\n";
            }
        }
    }
    void question8_10_5(int number)
    {
        for (int i { 1 }; i <= number; i++) {
            if (i % 3 == 0)
                std::cout << "fizz";
            if (i % 5 == 0)
                std::cout << "buzz";
            if (i % 7 == 0)
                std::cout << "pop";
            if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
                std::cout << i;
            std::cout << "\n";
        }
    }
}


