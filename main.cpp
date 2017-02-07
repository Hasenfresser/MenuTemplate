/**
 *  @file       main.cpp
 *  @author     Hasenfresser
 *  @version    under construction
 *  @date       2016-02-01
 *
 *  @brief      Main file of the project. Just for testing purposes.
 */

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;

/**
 *   @brief      Main function of MenuTemplate.
 */
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;

    MenuA.Title = "\t\tMyGame 1.0";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("> ");

    MenuA.addEntry("GAME_NEW", "New game");
    MenuA.addEntry("GAME_LOAD", "Load savestate");
    MenuA.addEntry("GAME_OPTIONS", "Game options");
    MenuA.addEntry("GAME_EXIT", "Exit game");

    MenuA.editEntry("Mem", "LaaaL", 0);

    MenuA.setCursorStartPosition(2);

    cout << MenuA.displayGetName() << endl;
}
