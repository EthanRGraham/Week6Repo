#include <fstream>
#include <iostream>
#include <sstream>

int main (){
	std::string currentLine;
	std::ifstream inFile;
"	
	inFile.open("data.csv");
		while (getline(inFile, currentLine)){
			std:: cout << currentLine << std::endl;
		}// end while
	inFile.close();
}//end main
