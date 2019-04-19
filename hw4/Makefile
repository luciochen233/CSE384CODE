printf: main_printf.o myshell.o
	gcc main_printf.o myshell.o
	./a.out

echo0: main_echo0.o myshell.o
	gcc main_echo0.o myshell.o -o my_echo0
	./my_echo0 Alice

echo: main_echo.o myshell.o
	gcc main_echo.o myshell.o -o my_echo
	-rm file1 file2
	./my_echo Alice @ file1
	./my_echo Bob @@ file1
	cat file1
	./my_echo Charlie @ file1
	cat file1
	./my_echo David @@ file2
	cat file2

cat: main_cat.o myshell.o
	gcc main_cat.o myshell.o -o my_cat
	./my_cat file1

touch: main_touch.o myshell.o
	gcc main_touch.o myshell.o -o my_touch
	./my_touch file1

compile: 
	gcc -c main_touch.c main_printf.c main_cat.c main_echo.c main_echo0.c myshell.c

clean:
	rm *.o *.out