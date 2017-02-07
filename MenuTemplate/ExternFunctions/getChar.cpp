/**
*   @file       getChar.cpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       2017-02-01
*
*   @brief      Source file of getChar function.
*/

#include "getChar.hpp"

#include <termios.h>
#include <iostream>
#include <unistd.h>

namespace ExternFunctions {

int8_t getChar() {
    int8_t Output = 0;

    #if defined LINUX

    struct termios old = {0};
    fflush(stdout);

    if(tcgetattr(0, &old) < 0)              perror("tcsetattr()");

    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;

    if(tcsetattr(0, TCSANOW, &old) < 0)     perror("tcsetattr ICANON");
    if(read(0, &Output, 1) < 0)             perror("read()");

    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;

    if(tcsetattr(0, TCSADRAIN, &old) < 0)   perror ("tcsetattr ~ICANON");

    return Output;

    #elif defined WINDOWS

    #include <conio.h>

    return getch();

    #else

    #error: No OS defined!

    #endif
}
} // end namespace