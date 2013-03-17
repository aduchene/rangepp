all: range range03

range: test_range.cpp
	c++ -Wall -std=c++11 test_range.cpp -o run_test_range

range03: test_range03.cpp
	c++ -Wall test_range03.cpp -o run_test_range03
