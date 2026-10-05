#include <iostream>
#include <string>

// Homework 6 — Freesia Garcia
// CIS 5 Week 06 · Menu

int main() {

  int choice;
  std::string name;
  int number;

  do
  {
    std::cout << "\n===== MENU =====\n";
    std::cout << "1. Say Hello\n";
    std::cout << "2. Countdown\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    
    if (choice == 1)
    {
      std::cout << "Enter your name: ";
      std::cin >> name;
      std::cout << "Hello " << name << "\n";
    }
    else if (choice == 2)
    {
        std::cout << "Enter a number to count down from: ";
        std::cin >> number;
        while (number >= 0)
        {
          std::cout << number << " ";
          number = number - 1;
        }
        std::cout << "\n";
    }
    else if (choice == 3)
    {
      std::cout << "Exiting menu...\n";
    }
    else
    {
      std::cout << "Invalid choice.\n";
    } 
    
  } while (choice != 3);
    std::cout << "The Menu is Closed.\n";

  return 0;
}
