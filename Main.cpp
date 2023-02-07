#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("C++.txt");
    std::string fileInLine;
    int counter = 0;
    if (file.is_open()) {
        char letter; std::cout << "Write letter: ";
        std::cin >> letter;
        while (std::getline(file, fileInLine)) {
            for (int i = 0; i < fileInLine.size(); i++) {
                int word = 0;
                if (fileInLine[i] == ' ') {
                    word++;
                    i++;
                }
                if (letter == fileInLine[i] && word == 1) {
                    counter++;
                }
            }
        }
        file.close();
    }
    std::cout << counter;
    return 0;
}

/*
C++ (pronounced "C plus plus") is a high-level general-purpose programming language created by Danish computer scientist 
Bjarne Stroustrup as an extension of the C programming language, or "C with Classes". The language has expanded significantly 
over time, and modern C++ now has object-oriented, generic, and functional features in addition to facilities for low-level memory
manipulation. It is almost always implemented as a compiled language, and many vendors provide C++ compilers,
including the Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM, so it is available on many platforms.
*/
