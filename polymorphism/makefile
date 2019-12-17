main: employee.o manager.o
	g++ -o main main.cc employee.o manager.o

employee.o:
	g++ -c employee.cc

manager.o:
	g++ -c manager.cc

clean:
	-rm *.o main