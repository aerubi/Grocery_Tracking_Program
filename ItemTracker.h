/*
* Aero Berry
* 06/22/25
* CS-210
* Grocery Tracking Program.
 */
#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <map>
#include <string>

// The ItemTracker class stores and analyzes grocery item frequency data.
class ItemTracker {
private:
    std::map<std::string, int> itemFrequency; // This is the map to store item name and its frequency.

public:
    ItemTracker(const std::string& filename);               // Constructor that reads input file and counts item frequencies.
    int getItemFrequency(const std::string& item);          // Returns the frequency of a specific item.
    void printAllItems();                                   // Prints all items and their frequencies.
    void printHistogram();                                  // Prints a histogram of all item frequencies.
    void saveFrequencyToFile(const std::string& outputFilename); // Saves frequency data to file (specified in main and from the assignment).
};

#endif
