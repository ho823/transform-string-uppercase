#include <iostream>
#include <string>
#include <cctype>


using namespace std;

//fonction to transform sentence to uppercase
string toUpperCase(const string str) {
    string strUpperCase = str;
    for (char& character : strUpperCase ) {
        character = toupper(static_cast<unsigned char>(character));
    }
    return strUpperCase;
}

int main() {
    string sentence;
    cout << "Enter a sentence or word to change to uppercase :";
    std::getline(cin, sentence);
    string trnasformSentence = toUpperCase(sentence);

    cout << "uppercase sentence: " << trnasformSentence << endl;
    return 0;
}