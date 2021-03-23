mian : main.o  src_a.o src_b.o  src_c.o
	gcc main.o src_a.o src_b.o src_c.o -o main

main.o : main.c
	gcc main.c -c -o main.o

src_a.o : src_a.c
	gcc src_a.c -c -o src_a.o

src_b.o : src_b.c
	gcc src_b.c -c -o src_b.o

src_c.o : src_c.c
	gcc src_c.c -c -o src_c.o

.PHONY : clean
clean:
	del *.o main.exe -rf
