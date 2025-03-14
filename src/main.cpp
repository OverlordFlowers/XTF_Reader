#include <iostream>
#include <fstream>

// Point of this program is to just read in an .xtf file and print out its headers.
#include "../include/xtfformat.h"


int main() {
    std::string filename = "../test_xtf/20240807_143421_RTSYS_001.xtf";
    std::ifstream file(filename, std::ios::binary);

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    file.seekg(0, std::ios::end);
    std::size_t filesize = file.tellg();
    file.seekg(0, std::ios::beg);

    char* buffer = new char[filesize];

    if (file.read(buffer, filesize)) {
        std::cout << "File successfully read." << std::endl;
    } else {
        std::cout << "Error reading file." << std::endl;
    }

    std::cout << std::hex << int(buffer[0]) << " " << int(buffer[1]) << std::endl;

    char* test = new char[8];
    test = buffer + 2;

    std::cout << test;

    return 0;
}