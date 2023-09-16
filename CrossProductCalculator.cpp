#include <iostream>
#include <cctype>
using namespace std;

int crossprodi(int j1, int k1, int j2, int k2) {
    int i = (j1*k2) - (k1*j2);
    return i;
}

int crossprodj(int i1, int k1, int i2, int k2) {
    int j = (i1*k2) - (k1*i2);
    return j;
}

int crossprodk(int i1, int j1, int i2, int j2) {
    int k = (i1*j2) - (j1*i2);
    return k;
}

string sign(int coordinate, char letter) {
    string numString = to_string(coordinate);
    if (coordinate == 0) {
        return "";
    }
    if (letter == 'i') {
        if (coordinate > 0 || coordinate < 0) {
            return numString + "i ";
        }
    }
    else if (letter == 'j') {
        if (coordinate > 0) {
            return "- " + numString + "j ";
        }
        else if (coordinate < 0) {
            return "+ " + numString.substr(1, numString.length() - 1) + "j ";
        }
    }
    else if (letter == 'k') {
        if (coordinate > 0) {
            return "+ " + numString + "k";
        }
        else if (coordinate < 0) {
            return "- " + numString.substr(1, numString.length() - 1) + "k";
        }
    }
}

int main() {
    int i1 = 0;
    int j1 = 0;
    int k1 = 0;
    int i2 = 0;
    int j2 = 0;
    int k2 = 0;

    cout << "Enter the i, j, k coordinates of the first vector." << endl;
    cout << "i: ";
    cin >> i1;
    cout << "j: ";
    cin >> j1;
    cout << "k ";
    cin >> k1;
    cout << endl;
    cout << "Enter the i, j, k coordinates of the second vector." << endl;
     cout << "i: ";
    cin >> i2;
    cout << "j: ";
    cin >> j2;
    cout << "k ";
    cin >> k2;

    int i3 = crossprodi(j1, k1, j2, k2);
    int j3 = crossprodj(i1, k1, i2, k2);
    int k3 = crossprodk(i1, j1, i2, j2);

    cout << "Cross product: ";
    cout << sign(i3, 'i');
    cout << sign(j3, 'j');
    cout << sign(k3, 'k');
    cout << endl;


    

return 0;
}