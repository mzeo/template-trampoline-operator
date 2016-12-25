CXX?=g++
CXXFLAGS?=-Wpedantic -std=c++14

fib: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o fib

clean:
	-rm fib
