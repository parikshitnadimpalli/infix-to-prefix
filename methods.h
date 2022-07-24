#include <iostream>
#include <limits>
#include <new>
#include <stack>
#include <string>
#include <algorithm>

bool isBalanced(std::string);	// This will check if all the brackets are balanced or not
bool isValid(std::string);		// This will check if the expression is valid or not
int getPrecedence(char);		// Returns precedence value of an operator
std::string infixToPrefix(std::string);	// This will return the converted string