/*
 * functionstocomplete.cpp
 *
 *  Created on: 02/18/20
 *      Author: Kristian Crosby
 */

//============================================================================
//	TODO add necessary includes here
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include "array_functions.h"
#include "constants.h"
#include "utilities.h"
#include <algorithm>
#include <time.h>
//============================================================================

//============================================================================
//	stuff you will need
//============================================================================
using namespace std;
using namespace constants;
//TODO define a structure to track words and number of times they occur
struct entry {
	string word = "";
	int num_word = 0;
};
//TODO add a global array of entry structs (global to this file)
entry wordArray[constants::MAX_WORDS];

void clearArray(){
	int size = getArraySize();
	for (int i = 0; i < size; i++){
		wordArray[i].word = "";
		wordArray[i].num_word = 0;
	}
}
//TODO add variable to keep track of next available slot in array
int nextSlot = 0;
//TODO define all functions in header file
std::string fileName = "testdata_full.txt";
//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!
		int getArraySize(){
			int count = 0;
			while (count <= constants::MAX_WORDS){
				if(getArrayWordAt(count) == ""){
					return count;
				}
				count++;
			}
			return count;
}

std::string getArrayWordAt(int i){
	return wordArray[i].word;
}

int getArrayWord_NumbOccur_At(int i){
	return wordArray[i].num_word;
}

bool processFile(std::fstream &myfstream){
	if (!myfstream.is_open()){
		return false;
	}
	string line;
	while (!myfstream.eof()){
		getline(myfstream, line);
		processLine(line);
	}
	return true;
}

void processLine(std::string &myString){
	string token;
	stringstream w(myString);

	while (getline(w, token, CHAR_TO_SEARCH_FOR)){
		processToken(token);
	}
}

void processToken(std::string &token){
	for (int i = 0; i <= constants::MAX_WORDS; i++) {

		strip_unwanted_chars(token);
		string tmp = getArrayWordAt(i);
		string tmp2 = token;
		toUpper(tmp);
		toUpper(tmp2);

		if (tmp == tmp2) {
			wordArray[i].num_word++;
			return;
		}
}

bool openFile(std::fstream& myfile, const std::string& myFileName,
			std::ios_base::openmode mode = std::ios_base::in);{
}


void closeFile(std::fstream& myfile);

int writeArraytoFile(const std::string &outputfilename);

void sortArray(constants::sortOrder so);

}
