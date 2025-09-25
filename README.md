# Algorithm

## First open the data file using a loop to read the entire file at once.
## inFile.open (data.csv)
## while getline(inFile, currentLine)){
### Use a stringstream and the getline() function to read one data element at a time
### Use a stringstream to do any data conversion turning the text into integers. 
### Convert to an int using stoi or a converter stream 
### do the same for the second token whihc will also be an int
### get remaining data as a string
### add ints together to get total 
### print out the string
## } //end getline whileLoop

## example of delimiter getline(ss, sCounter, ',')

## add up the two integers and print the string/text that amount of times.
## for sum print word
## repeat for each line in 'data.csv'
## main(
 std::ifstream inFile;
  std::string currentLine;
  std::stringstream converter;
  std::stringstream ss;
  int counter;
  std::string sCounter;
  std::string text;

