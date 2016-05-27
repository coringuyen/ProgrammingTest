#pragma once
#include <string>
#include <fstream>
#include <list>
#include <iostream>

class Boggle
{
private:
	char board[4][4];
	bool isDone = true;
	std::list<std::string> words;
	std::string Board, Dictionary, m_word;

	void insertBoard(std::string path);
	bool dictionaryCheck(std::string word);
	bool is_doneFindWords();
public:
	Boggle(std::string boardFile, std::string dictionaryFile) : Board(boardFile), Dictionary(dictionaryFile)
	{
		insertBoard(boardFile);

		/*if (dictionaryCheck("zero"))
		{
			for (int i = 0; i < 4; i++)
				for (int j = 0; j < 4; j++)
					std::cout << board[i][j] << std::endl;
		}*/

		if (is_doneFindWords())
			std::cout << m_word << std::endl;


	}
	void Solve();
};