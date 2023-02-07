#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("C++.txt");
    std::string fileInLine, temp;

    int counter = 0;
    if (file.is_open()) {
        while (std::getline(file, temp)) {}
        std::cout << temp;
        char letter; std::cout << "\n\nWrite letter: ";
        std::cin >> letter;

        fileInLine += ' ';
        fileInLine += temp;
        for (int i = 0; i < fileInLine.size(); i++) {
            if (fileInLine[i] == ' ' ||
                fileInLine[i] == '"' ||
                fileInLine[i] == '(' ||
                fileInLine[0] == ' ')
            {

                if (letter == fileInLine[i + 1] ||
                    fileInLine[0] == fileInLine[1])
                    counter++;

            }
        }
        file.close();
    }
    std::cout << "Your letter occurs: " << counter << " times";
    return 0;
}

/*
C++ (pronounced "C plus plus") is a high-level general-purpose programming language created by Danish computer scientist
Bjarne Stroustrup as an extension of the C programming language, or "C with Classes". The language has expanded significantly
over time, and modern C++ now has object-oriented, generic, and functional features in addition to facilities for low-level memory
manipulation. It is almost always implemented as a compiled language, and many vendors provide C++ compilers,
including the Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM, so it is available on many platforms.
*/
