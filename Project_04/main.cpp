#include <iostream>
using namespace std;

/* Scope:
 * The extent of the area or subject matter that something deals with or to which it is relevant.
 *
 *  Broken down the above sentence can mean four things:
 *    1) the extent of the area that something deals with.
 *    2) the extent of the area to which it is relevant.
 *    3) the subject matter that something deals with.
 *    4) the subject matter to which it is relevant.
 *
 *   In programming terms:
 *    *) The extent to which a variable is relevant.
 */

// Global Scope
int variable = 12;

int main()
{ // Starts Function Scope
    cout << __LINE__ << " " << variable << endl;

    // Function Scope - Hides Global Scope
    int variable = 10;

    cout << __LINE__ << " " << variable << endl;

    { // Starts Local Scope
        // Local Scope - Hides Function Scope
        int variable = 5;
        cout << __LINE__ << " " << variable << endl;
    } // Ends Local Scope

    cout << __LINE__ << " " << variable << endl;

    { // Starts Second Local Scope
        cout << __LINE__ << " " << variable << endl;
    } // Ends Second Local Scope

    cout << __LINE__ << " " << variable << endl;

    return 0;
} // Ends Function Scope
