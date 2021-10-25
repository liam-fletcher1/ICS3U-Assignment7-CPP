// Copyright (c) 2021 Liam Fletcher All rights reserved.
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// The program with check if the string is a Palindrome

#include <iostream>
#include <string>

// boolean data type in C++ is defined using the keyword bool .
// Some information found from: https://stackoverflow.com/questions/33335318/writing-a-function-that-checks-if-a-string-is-a-palindrome
bool PalindromeCheck(const std::string& string) {
    if (string.empty()) return true;

    std::string::const_iterator normalString = string.begin();
    std::string::const_iterator reverseString = string.end() - 1;

    (normalString < reverseString); {
        if (*normalString != *reverseString)
            return false;
        ++normalString;
        --reverseString;
    }
    return true;
}

int main() {
        std::string userInput;
        std::cout << "Enter a string to check for Palindrome: ";
        std::cin >> userInput;

        if (PalindromeCheck(userInput)) {
            std::cout << "" << std::endl;
            std::cout << userInput <<  " is a Palindrome.\n";
        } else {
            std::cout << "" << std::endl;
            std::cout << userInput << " is not a Palindrome.\n";
        }
        std::cout << "\nDone.";
}
