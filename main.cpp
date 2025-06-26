/*
* Aero Berry
* 06/22/25
* CS-210
* Grocery Tracking Program
 */
#include <iostream>
#include "ItemTracker.h"
#include <filesystem>

// Displays the menu with the requested options to the user.
void showMenu() {
    std::cout << "\nCorner Grocer Menu\n";
    std::cout << "1. Search for item frequency\n";
    std::cout << "2. Print all item frequencies\n";
    std::cout << "3. Print histogram\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
  /*
   *(Had a directory issue, so I used this to print the directory path)
   *namespace fs = std::filesystem;
   *std::cout << "Current working directory: " << fs::current_path() << "\n";
   */

    ItemTracker tracker("CS210_Project_Three_Input_File.txt"); // Loads item data given to us from this file.
    tracker.saveFrequencyToFile("frequency.dat"); // Creates the backup file as requested.

    int choice;
    std::string item;

    do {
        showMenu();
        std::cin >> choice;

        // Input validation for the menu from the optional challenge.
        while (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input. Please enter a number between 1 and 4: ";
            std::cin >> choice;
        }

        //Switch to delegate what happens with each correct input.
        switch (choice) {
            case 1:
                std::cout << "Enter item name: ";
                std::cin >> item;
                std::cout << item << " was purchased " << tracker.getItemFrequency(item) << " times.\n";
                break;
            case 2:
                tracker.printAllItems();
                break;
            case 3:
                tracker.printHistogram();
                break;
            case 4:
                std::cout << "Exiting program...\n";
                break;
        }
    // Loops the program until the exit input is entered.
    } while (choice != 4);

    return 0;
}
