#include <cassert>
#include "../src/fibonacci.h"

void test_fibonacci() {
	assert(fibonacci(5) == std::vector<int>({ 0, 1, 1, 2, 3 }));
	assert(fibonacci(0).empty());
}

int main() {
	test_fibonacci();
	return 0;
}