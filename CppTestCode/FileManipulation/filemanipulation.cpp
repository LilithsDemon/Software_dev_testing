#include <iostream>
#include <string>
#include <fstream>
#include <vector>


int main()
{
    std::ifstream textFile("FileReadingTask.txt");

    std::string text="";

    std::vector<char> first_letters;

    while (getline(textFile, text))
    {
        std::cout << text << "\n";
        first_letters.push_back(text[0]);
    }

    for (int i = 0; i < first_letters.size(); i++)
    {
        std::cout << first_letters[i] << "\n";
    }

    textFile.close();
}