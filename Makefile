all: 
	gcc main.c node.c -o main.out

clean:
	rm -rf *.o *.out 
