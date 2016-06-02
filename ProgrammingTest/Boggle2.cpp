#include "Boggle2.h"

// store information of 4x4 grid letters from file
void Boggle2::InsertBoard(std::string path) 
{
	std::string line;
	std::ifstream file(path);
	if (file.is_open()) // open file
	{
		int row = 0, col = 0;
		while (std::getline(file, line)) // read line by line file
		{
			for (unsigned i = 0; i << line.length(); ++i)
			{
				if (line.at(i) != ' ') // find the char that is not space
				{
					board[row][col] = line.at(i);
					col++; // inscrease col for the next word to be store
				}
			}
		}
		row++; // increase row for the next row to be store 
		col = 0; // reset col for the next row

		file.close(); // close file
	}
}

// return true if the word is exist in the dictionary file
bool Boggle2::is_wordAcceptable(std::string word) 
{
	std::string line;
	std::ifstream file(dictionaryFile);

	if (file.is_open()) // open file
	{
		while (std::getline(file, line)) // read line by line in file
		{
			// checking if the first letter is the same and both word have same numbers of letter
			if (line.front() == word.front() && line.length() == word.length())
			{
				if (word.compare(line)) // this is to check if both words are the same
					return true;
			}
			file.close(); // close file
		}
	}
	return false;
}
int x = 0;
void Boggle2::FindWords()
{
	std::string word;
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 4; ++j)
		{
			word.push_back(board[i][j]); // starting letter
			
		}
}

void Boggle2::Output()
{
	//FindWords();
}