#include <iostream>
#include <string>



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

Scale chort[]={Tonic, Third, Sixth};

/*
int Tonic = 1;
int Second = 2;
int Third = 3;
*/

int main() {

    int numNotes = 0;
    int *chord;

    cout << "A Sharp: " << Ab << endl;

    Notes note = A;

    std::cout << "Hello, World!" << std::endl;

    cout << "How many notes: ";
    cin.clear();
    cin >> numNotes;

    cout << "Number of notes: " << numNotes << endl;

    chord[numNotes]={0};

    chord[0] = Bc;
    chord[1] = C;
    chord[2] = A;
    cout << endl;
    cout << "Chord is: ";

    for (int i=0; i<numNotes;i++)
        cout << chord[i] << " ";


    return 0;
}