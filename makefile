
exe:main.o print.o add.o file.o sort.o delete.o modify.o
	cc main.o print.o add.o file.o sort.o delete.o modify.o -o exe
main.o:main.c
	cc -c main.c
print.o:print.c
	cc -c print.c
add.o:add.c
	cc -c add.c
file.o:file.c
	cc -c file.c
sort.o:sort.c
	cc -c sort.c
delete.o:delete.c
	cc -c delete.c
modify.o:modify.c
	cc -c modify.c
clear:
	echo "clearing please wait..."
	rm -rv *.o

