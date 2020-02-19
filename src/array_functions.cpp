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

//TODO add variable to keep track of next available slot in array

//TODO define all functions in header file

//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!

