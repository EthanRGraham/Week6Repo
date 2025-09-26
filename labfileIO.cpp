#include <fstream>
#include <iostream>
#include <sstream>

int main (){
	std::string currentLine;
	std::ifstream inFile;
	std::stringstream ss;
	std::string text;
	int number;

	inFile.open("data.csv");
		while (getline(inFile, currentLine)){
			ss >> currentLine;
			std::cout << ss.str();
			std::cout << currentLine << " testing" << std::endl;

			ss >> number;
			std::cout << number << std::endl;
			
			ss >> number;
			std::cout << number << std::endl;

			ss >> text;
			std::cout << text << std::endl;

			
			//std:: cout << currentLine << std::endl;
		}// end while
	inFile.close();
}//end main
