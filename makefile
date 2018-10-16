brilliant8080: brilliant8080.o
	gcc -o brilliant8080 brilliant8080.o
brilliant8080.o: brilliant8080.c
	gcc -c brilliant8080.c
clean:
	rm brilliant8080 brilliant8080.o
