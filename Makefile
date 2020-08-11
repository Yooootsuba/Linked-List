all: node.o
	gcc main.c node.o -o main.out

clean:
	rm -rf *.o *.out 
