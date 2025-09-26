#include <fstream>
#include <iostream>
#include <sstream>

int main (){
	std::string currentLine;
	std::ifstream inFile;
	int num1;
	int num2;
	int sum;
	std::string snum1;
	std::string snum2;
	inFile.open("data.csv");
		while (getline(inFile, currentLine)){
			std::string text;
			std::stringstream ss;
			std::stringstream converter;
			converter.str(currentLine);

			getline(converter, snum1, ',');
			getline(converter, snum2, ',');
			getline(converter, text);

			converter.clear();
			converter.str("");

			converter << snum1 << "" << snum2;
			converter >> num1 >> num2;

			int sum = num1 + num2;

			for (int i = 0; i < sum; i++){
				std::cout << text << "";
			}// end for
			std::cout << std::endl;
		      
		       
			/*	
			int number;
			ss.clear();
			ss.str(currentLine);

			ss >> currentLine;
			getline(ss, number, '/n');

			std::cout << ss.str();
			std::cout << currentLine << std::endl;

			ss >> number;
			std::cout << number << std::endl;
			
			ss >> number;
			std::cout << number << std::endl;
			
			ss >> text;
			std::cout << text << std::endl;
			*/
			
			//std:: cout << currentLine << std::endl;
		}// end while
	inFile.close();
}//end main
