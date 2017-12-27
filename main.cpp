/**
 *  @file       main.cpp
 *  @author     Hasenfresser
 *  @version    1.03
 *  @date       2016-12-28
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

    MenuA.Title = "\t\tMenuTemplate 1.03";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("> ");

    MenuA.addEntry("GAME_NEW", "New game");
    MenuA.addEntry("GAME_LOAD", "Load save state");
    MenuA.addEntry("GAME_EXIT", "Exit game");
    MenuA.addEntry("GAME_OPTIONS", "Game options");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);

    cout << MenuA.displayGetName() << endl;
}
