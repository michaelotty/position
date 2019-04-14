position: main.o libgetPosition.a
	gcc -Wall -O3 main.o -lm -lwiringPi -L. -lgetPosition -o position

main.o: main.c
	gcc -Wall -O3 -o main.o -c main.c

libgetPosition.a:
	make -f getPosition_rtw.mk
.PHONY: clean

clean:
	rm -f *.o *.a position
