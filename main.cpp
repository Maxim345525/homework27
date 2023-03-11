#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[100];
    int len, word = 0;
    cout << "Input text: ";
    cin.getline(str, 100);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) 
        {
            word++;
        }
    }
    cout << " Number of words: " << word << endl;
    return 0;
}
