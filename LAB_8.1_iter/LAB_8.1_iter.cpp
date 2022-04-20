#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>


using namespace std;

int Count(char* str, int strLength);
char* Change(char* str, int strLength);

int main()
{
    const int strLength = 101;

    char str[strLength];

    cout << "Enter string:" << endl;
    cin.getline(str, strLength - 1);
    cout << endl;
    cout << " letters of word: " << setw(2) << Count(str, strLength) << endl << endl;
    char* dest = new char[151];
    dest = Change(str, strLength);
    cout << "Modified string : " << dest << endl;


    return 0;
}

int Count(char* str, int strLength)
{
    int count = 0;
    for (size_t i = 0; i < strLength - 2; i++) {
        const int firstLetterIsValid = str[i] == 'a' || str[i] == 'b' || str[i] == 'c';
        const int secondLetterIsValid = str[i + 1] == 'a' || str[i + 1] == 'b' || str[i + 1] == 'c';
        const int thirdLetterIsValid = str[i + 2] == 'a' || str[i + 2] == 'b' || str[i + 2] == 'c';

        if (firstLetterIsValid && secondLetterIsValid && thirdLetterIsValid) {
            count++;
        }
    }
    return count;

}


char* Change(char* str, int strLength)
{
    for (size_t i = 0; i < strLength - 2; i++) {
        const int firstLetterIsValid = str[i] == 'a' || str[i] == 'b' || str[i] == 'c';
        const int secondLetterIsValid = str[i + 1] == 'a' || str[i + 1] == 'b' || str[i + 1] == 'c';
        const int thirdLetterIsValid = str[i + 2] == 'a' || str[i + 2] == 'b' || str[i + 2] == 'c';

        if (firstLetterIsValid && secondLetterIsValid && thirdLetterIsValid) {
            str[i] = '\a';
            str[i + 1] = '*';
            str[i + 2] = '*';
        }


    }
    return str;
}
