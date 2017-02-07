/**
*   @file       getChar.hpp
*   @author     Hasenfresser
*   @version    under construction
*   @date       2017-02-01
*
*   @brief      Header file of getChar function.
*/

// include guard
#if !defined GETCHAR_HPP
#define GETCHAR_HPP

#include <cstdint>

// define LINUX or WINDOWS
#define LINUX

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
