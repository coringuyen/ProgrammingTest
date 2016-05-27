#include "Boggle.h"

void Boggle::insertBoard(std::string path)
{
	// insert the board file into a 4x4 char array
	std::string line;
	std::ifstream file(path);
	if (file.is_open())
	{
		int row = 0, col = 0;
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
			for (unsigned i = 0; i < line.length(); ++i)
			{
				if (line.at(i) != ' ')
				{
					board[row][col] = tolower(line.at(i));
					//std::cout << "Row: " << row << "Col: " << col << " " << board[row][col] << std::endl;
					col++;
				}
			}
			col = 0; row++;
		}
		file.close();
	}
}

bool Boggle::dictionaryCheck(std::string word)
{
	// return true if the words is in the dictionary
	std::string line;
	std::ifstream file(Dictionary);

	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (line.at(0) == word.at(0))
				if (line.length() == word.length())
					if (word.compare(line) == 0) // if they are the same word
					{
						//std::cout << word << " compare " << line << std::endl;
						return true;
					}
			
		}
		file.close();
	}
	return false;
}

bool Boggle::is_doneFindWords()
{
	std::string word;
	int rowSL = 0, colSL = 0;
	int rowAL = 0, colAL = 0;

	if (rowSL == 4 && colSL == 4)
		isDone = false;

	word.push_back(board[rowSL][colSL]); // add the start letter in the string 

	while (isDone)
	{
		//no duplicate letter in a word
		/*if (word.length() => 3)
		{
			
		}
		else
		{
			colAL++;
			word.push_back(board[rowSL + colAL][colSL + colAL]);
		}*/

		m_word = word;
		isDone = false;
	}

	return true;
}

void Boggle::Solve()
{
	//Solve, then create text file and insert all the words in with alphabetical order
	std::cout << Board << " " << Dictionary << std::endl;
}