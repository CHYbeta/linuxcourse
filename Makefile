main:main.o function.o
	gcc main.o function.o -o main
main.o:main.c
	gcc -c main.c
calculator.o:function.c
	gcc -c function.c
clean:
	rm main *.o