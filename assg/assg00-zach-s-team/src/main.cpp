/** @file main.cpp
 *
 * @brief main/debug executable for Assignment Primes: Practice Example
 *   and Class Workflow
 *
 * @author Jane Programmer
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VS Code Server 3.9.3
 * @note   assg : Assignment Example
 * @date   June 1, 2021
 *
 * Assignment Example, example Workflow for Assignments and gettingGit and
 * GitHub and VSCode setup.  This file contains a separate main()
 * function and is meant to be compiled to a separate executable to be
 * used for debugging or testing.
 */
#include "primes.hpp"
#include <cmath>
#include <iostream>
using namespace std;

/** @brief Main entry point
 *
 * Main entry point for debugging functions.
 *
 * @param argc The command line argument count, the number of arguments
 *   provided by user on the command line.
 * @param argv An array of char* old style c-strings.  Each argv[x]
 *   that is passed in holds one of the command line arguments provided
 *   by the user to the program when started.
 *
 * @returns int Returns 0 to indicate successfull completion of program,
 *   and a non-zero value to indicate an error code.
 */
int main(int argc, char** argv)
{
  // do something here to test/debug the assignment code
  cout << "Hello Assignment Primes" << endl;

  /*
     bool res;
     res = isPrime(4);
     cout << "Result is: " << boolalpha << res << endl;
   */

  /*
     int numPrimes;
     numPrimes = findPrimes(1, 1000, true);
     cout << "Number of primes between 1 and 1000 (inclusive): " << numPrimes << endl;
   */

  // return 0 to indicate successful completion
  return 0;
}
