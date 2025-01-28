# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic

# Default target
all: test_program

# Link the test program with the object files
test_program: test.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.o functions_to_implement.o -o test_program

# Compile test.cpp to test.o
test.o: test.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c test.cpp

# Compile functions_to_implement.cpp to functions_to_implement.o
functions_to_implement.o: functions_to_implement.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# Clean up build files
clean:
	rm -f *.o test_program