derlecalistir: hepsi calistir

hepsi:  kisi.o stackstring.o stack.o avl.o test.o 
	g++ ./lib/Kisi.o ./lib/Stack.o ./lib/StackString.o ./lib/avl.o ./lib/Test.o -o ./bin/Test

avl.o:
	g++ -I "./include" -c ./src/Avl.cpp -o ./lib/avl.o
stack.o:
	g++ -I "./include" -c ./src/Stack.cpp -o ./lib/Stack.o

stackstring.o:
	g++ -I "./include" -c ./src/StackString.cpp -o ./lib/StackString.o
	
test.o:
	g++ -I "./include" -c ./src/Test.cpp -o ./lib/Test.o
kisi.o:
	g++ -I "./include" -c ./src/Kisi.cpp -o ./lib/Kisi.o

calistir:
	./bin/Test