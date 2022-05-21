
.PHONY: clean

partc.o: PartC.c PartC.h
	gcc -Wall -c -o partc.o PartC.c

partc.a: partc.o
	ar rcs partc partc.o


clean:
	rm -f *.o* *.a partc

