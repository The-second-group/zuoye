test:test.o 
	gcc -o test test.o
test.o:test.c student_info.h
	gcc -c test.c -o test.o
clean :
	rm test.o
