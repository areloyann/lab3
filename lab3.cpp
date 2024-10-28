#include <iostream>
#include <string>
using namespace std;
string caesarEncrypt(const string &text, int shift) {
    string encryptedText = "";
    
    for (char ch : text) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            encryptedText += (ch - base + shift) % 26 + base;
        } else {
            encryptedText += ch;
        }
    }
    
    return encryptedText;
}

string caesarDecrypt(const string &text, int shift) {
    return caesarEncrypt(text, -shift);
}

int main() {
    string word = "Hello, World!";
    int shiftValue = 3;

    string encrypted = caesarEncrypt(word, shiftValue);
    cout << "Encrypted: " << encrypted << endl;

    string decrypted = caesarDecrypt(encrypted, shiftValue);
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
