#include <iostream>
#include <string>

/*
 *
 * This small code sample is for the purpose of demonstrating enums
 * in the Makeraspace which I work.
 *
 * Vectors are not used because the student was not familiar with
 * vectors and their requirement is that vectors are not permitted.
 *
 * This code makes little sense because it was used in a classroom
 * setting to demonstrate what works and what doesn't.
 */


using namespace std;

enum Notes {
    A=1, Ab, B, Bc, C=10, Cd
};

enum Color {
    red, green, blue
};

enum Scale {
    Tonic=1, Second, Third, Forth, Fifth, Sixth, Seventh
};

Scale chordArray[]={Tonic, Third, Sixth}; //example of array of Scale type.

/*
 * Example that these declaration are the as enums.
int Tonic = 1;
int Second = 2;
int Third = 3;
*/

int main() {

    int numNotes = 0;
    int *chordPtr;

    cout << "A Sharp: " << Ab << endl;

    Notes note = A;

    std::cout << "Hello, World!" << std::endl;

    cout << "How many notes: ";
    cin.clear();
    cin >> numNotes;

    cout << "Number of notes: " << numNotes << endl;

    cout << endl;

    chordPtr[numNotes] = {0};


    chordPtr[0] = Bc;
    chordPtr[1] = C;
    chordPtr[2] = A;


    for (int i=0; i<numNotes;i++)
        cout << chordPtr[i] << " ";


    return 0;
}