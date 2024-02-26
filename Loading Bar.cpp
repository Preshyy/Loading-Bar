// Loading Bar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Including the iostream library for standard input
#include <conio.h> // Including the console input/output library for console input functions
#include <windows.h>
using namespace std;

// Defining function for icon/text placements
void coordxy(int x, int y) {
    HANDLE console;
    COORD position;

    position.X = x;
    position.Y = y;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(console, position);
}

// Loading bar function
void loadingBar() {

    system("cls"); // Clears the screen/Creates a new screen

    // Adding some text
    coordxy(44, 13);
    cout << "LOADING...";
    coordxy(100, 26);
    cout << "YOUR APP 1.0";

    // Level % to be displayed
    int level = 13; // Starts at 13 and goes to 100%

    // Drawing the frames of the loading bar
    for (int x = 44; x < 74; x++) { // 2 Horizontal lines
        coordxy(x, 14);
        printf("%c", 205);
        coordxy(x, 16);
        printf("%c", 205);
    }

    for (int y = 15; y < 16; y++) { // 2 Vertical lines
        coordxy(44, y);
        printf("%c", 186);
        coordxy(74, y);
        printf("%c", 186);
    }

    // Corners of the Loading bar
    // Top Left - (x, y) coordinates
    coordxy(44, 14);
    printf("%c", 201); // 201 - ASCII code for left angled side-bars

    // Top right - (x, y) coordinates
    coordxy(74, 14);
    printf("%c", 187); // 187 - ASCII code for right angled side-bars

    // Bottom left - (x, y) coordinates
    coordxy(44, 16);
    printf("%c", 200);

    // Bottom right - (x, y) coordinates
    coordxy(74, 16);
    printf("%c", 188);

    // Loading Bar Design
    for (int load = 45; load <= 73; load++) {
        coordxy(load, 15);
        // cout << "#"; // Alternative loading bar display option
        printf("%c", 219); // 219 ASCII code for a square
        // 178 could not be displayed on the console
        Sleep(100); // This pauses the action at every loop to create the loading effect

        // Updating the number with the loaded level
        level += 3; // Since it starts at level 13, it adds 3 to every cycle
        coordxy(58, 17);
        cout << level << "%"; // Shows the level
    }
}

// Main Function
int main()
{

    // Display colour
    system("COLOUR F0"); // White background, Black text

    loadingBar(); // Calling the loading bar function
    _getch();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
