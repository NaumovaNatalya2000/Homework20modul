all: prog
prog: main.o User.o Messages.o FunctionsMenu.o FunctionsSystem.o sha1.o TCPCHAT.o
	g++ main.o User.o Messages.o FunctionsMenu.o FunctionsSystem.o sha1.o TCPCHAT.o -o programm
	rm -rf *.o
main.o:
	g++ -c main.cpp
User.o:
	g++ -c User.cpp
Messages.o:
	g++ -c Messages.cpp
FunctionsMenu.o:
	g++ -c FunctionsMenu.cpp
FunctionsSystem.o:
	g++ -c FunctionsSystem.cpp
sha1.o:
	g++ -c sha1.cpp
TCPCHAT.o:
	g++ -c TCPCHAT.cpp
clear:
	rm -rf *.o programm