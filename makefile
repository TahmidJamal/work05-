all: work5.o driver.o
	gcc -o test driver.o work5.o

work5.o: work5.c work5.h
	gcc -c work5.c

driver.o: driver.c work5.h
	gcc -c driver.c

run:
	./test

clean:
	rm *.o
