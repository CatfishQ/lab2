lab2: lab2.o class.o
	g++ -o lab2 lab2.o class.o

class.o: class.cpp class.h
	g++ -c class.cpp

lab2.o: lab2.cpp class.h
	g++ -c lab2.cpp

clean:
	rm class *.o
