#include "palindrome.h"
#include <algorithm>

bool is_palindrome(int num) {
	std::string s = std::to_string(num);
	std::string rev = s;
	std::reverse(rev.begin(), rev.end());
	return s == rev;
}