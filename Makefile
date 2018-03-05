all:
	g++ --std=c++11 -o test *.cpp
	
clean:
	rm -rf test
