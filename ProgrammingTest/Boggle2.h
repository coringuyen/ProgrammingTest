#pragma once
#include <string>
#include <fstream>
#include <list>
#include <iostream>

class Boggle2
{
private:
	char board[4][4]; // store the 4v4 grid letter from file
	std::list<std::string> listOfWords; // store words when found
	std::string dictionaryFile; // store the path to dictionary file and board file
	//bool t, b, l, r, tl, tr, bl, br;

	void InsertBoard(std::string path);
	bool is_wordAcceptable(std::string word);
	void FindWords();

public:
	Boggle2(std::string dictionaryPath, std::string boardPath) : dictionaryFile(dictionaryPath)
	{
		InsertBoard(boardPath);
	}

	void Output();
};
