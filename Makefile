test:test.o 
	gcc -o test test.o
test.o:test.c student_info.h
	gcc -c test.c -o test.o
hello:hello.o
        gcc -o hello hello.o
hello.o:hello.c
        gcc -c hello.c -o hello.o
clean :
	rm test.o hello.o
