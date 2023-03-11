#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[100];
    int letters = 0, digits = 0, others = 0;

    cout << "Input text: ";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { 
            letters++;
        }
        else if (isdigit(str[i])) { 
            digits++;
        }
        else if (ispunct(str[i]))
        {
            others++;
        }
    }

    cout << "Letters-> " << letters << endl;
    cout << "Digits-> " << digits << endl;
    cout << "Others->" << others << endl;

    return 0;
}