/**
*   @file       getChar.hpp
*   @author     Hasenfresser
*   @version    1.01
*   @date       2017-02-08
*
*   @brief      Header file of getChar function.
*/

// include guard
#if !defined GETCHAR_HPP
#define GETCHAR_HPP

// define LINUX or WINDOWS
#define LINUX

#include <cstdint>

/**
 *  @namespace  ExternFunctions
 *
 *  @brief      Namespace of extern functions.
 */
namespace ExternFunctions {

/**
*   @brief      Returns presed key without pressing return.
*
*   @return     Char of pressed key.
*/
int8_t getChar();

} // end namespace

#endif // !defined GETCHAR_HPP
