cmake_minimum_required(VERSION 3.10)
project(OS_KR)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(os_kr
  src/main.cpp
  src/fibonacci.cpp
  src/palindrome.cpp
  src/linked_list.cpp
)

add_executable(test_fibonacci
  tests/test_fibonacci.cpp
  src/fibonacci.cpp
)
add_test(NAME FibonacciTest COMMAND test_fibonacci)

add_executable(test_palindrome
  tests/test_palindrome.cpp
  src/palindrome.cpp
)
add_test(NAME PalindromeTest COMMAND test_palindrome)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(TEST_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin/tests)

if(WIN32)
  set(CMAKE_EXE_LINKER_FLAGS "-static")
endif()