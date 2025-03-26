#include <iostream>
using namespace std;

int main() {
    // Use unsigned char to avoid overflow
    for (unsigned char c = 0; c <= 127; c++) {
        cout << "ASCII Value: " << static_cast<int>(c) << " -> Character: ";

        // Only print printable characters
        if (c >= 32 && c <= 126) {  
            cout << c;
        }
        else {
            cout << "Non-printable";
        }

        cout << endl;
    }

    return 0;
}
