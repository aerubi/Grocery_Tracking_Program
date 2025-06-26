Project Summary:

This project, developed in C++ using CLion, was designed for a fictional client, The Corner Grocer, to help analyze item sales throughout the day. The grocery store wanted an efficient way to determine how frequently different produce items are purchased, so they can reorganize their layout for better accessibility and sales. The program reads an input file of purchased items, tallies their frequencies, and provides a user-friendly menu to: Search for how many times a specific item was purchased, View the full list of item purchase frequencies, Display a histogram-style visualization, and Save a backup to a .dat file automatically.


What I Did Well:

I implemented a clean, object-oriented design using a custom ItemTracker class. This helped separate concerns, making the code more maintainable. I also used a C++ std::map for frequency tracking, which gave the program fast lookups and sorting out of the box. The final code follows good coding practices with inline comments, consistent naming, and modularity.

Areas for Improvement:

If I were to enhance this project, I would: Add full input case-insensitivity so users could type “zucchini” or “ZUCCHINI” and still get results, Allow searching with partial words or fuzzy matches for user convenience, Add exception handling to support corrupted or missing input files more gracefully, and Implement automated testing with assert statements or a small test suite for validation. These changes would improve usability, robustness, and make the code more production-ready.

Most Challenging Part:
One of the most challenging aspects was debugging file access in CLion. Initially, the program silently failed because the input file wasn’t in the correct working directory. I overcame this by: Printing the current working directory at runtime, Learning how to set the working directory in CLion's run configurations, Using debugging output to verify file loading, Now I’m more confident in debugging C++ file I/O and configuring IDE environments — a skill I’ll take into future projects.

Transferable Skills:

Reinforce file input/output and std::ifstream/ofstream usage, Practice with data structures (std::map), Apply modular design and class-based architecture, and Using CMake and build systems through CLion. All of these are highly transferable to future coursework and software development roles.

Readability and Maintainability:

My program was organized with main.cpp – contains menu logic, and ItemTracker.h / ItemTracker.cpp – encapsulates all file and frequency logic. The codes readability was improved by: Using descriptive variable and function names, Adding comments for each function and major logic block, and Following C++ naming conventions and indentation best practices. This modular design also makes it easy to expand, e.g., adding CSV export or graphical UI in the future!