output: Complex.o Real.o main.o
	g++ Complex.o Real.o main.o -o output

Complex.o: Complex.cpp Complex.h
	g++ --std=c++11 -c Complex.cpp

Real.o: Real.cpp Real.h
	g++ --std=c++11 -c Real.cpp

main.o: main.cpp
	g++ --std=c++11 -c main.cpp

clean:
	rm *.o output