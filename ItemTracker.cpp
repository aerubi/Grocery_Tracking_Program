/*
* Aero Berry
* 06/22/25
* CS-210
* Grocery Tracking Program
 */
#include "ItemTracker.h"
#include <fstream>
#include <iostream>
#include <iomanip>

// This is the constructor that reads item data from the input file (Described in main) and populates the itemFrequency map.
ItemTracker::ItemTracker(const std::string& filename) {
    std::ifstream file(filename);
    //I was having an issue with it not reading the data, so I added this to ensure it opened the file, and report if it failed.
    if (!file.is_open()) {
        std::cout << "Error: Failed to open file: " << filename << "\n";
        return;
    }
    std::string item;
    while (file >> item) {
        ++itemFrequency[item]; // Increment frequency count for each item
    }
    file.close();
}

// This returns the frequency count for a given item when called.
int ItemTracker::getItemFrequency(const std::string& item) {
    return itemFrequency[item];
}

// This prints each item and its purchase frequency when called.
void ItemTracker::printAllItems() {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first << " " << pair.second << "\n";
    }
}

// This prints a histogram using asterisks representing item purchase frequency as requested when called.
void ItemTracker::printHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) std::cout << "*";
        std::cout << "\n";
    }
}

// This writes the item frequencies to a backup file for storage (The file name is desc. in main).
void ItemTracker::saveFrequencyToFile(const std::string& outputFilename) {
    std::ofstream outFile(outputFilename);
    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << "\n";
    }
    outFile.close();
}
