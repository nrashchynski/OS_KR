#include <cassert>
#include "../src/palindrome.h"

void test_palindrome() {
	assert(is_palindrome(121) == true);
	assert(is_palindrome(123) == false);
}

int main() {
	test_palindrome();
	return 0;
}