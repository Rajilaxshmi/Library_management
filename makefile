R:main.o add.o update.o rem.o search.o view.o issue.o ret.o list.o save.o exit.o
	cc main.c add.c update.c rem.c search.c view.c issue.c ret.c list.c save.c exit.c -o R
main.o: main.c
	cc -c main.c
add.o: add.c
	cc -c add.c
update.o: update.c
	cc -c update.c
rem.o: rem.c
	cc -c rem.c
search.o: search.c
	cc -c search.c
view.o: view.c
	cc -c view.c
issue.o: issue.c
	cc -c issue.c
ret.o: ret.c
	cc -c ret.c
list.o: list.c
	cc -c list.c
save.o: save.c
	cc -c save.c
exit.o: exit.c
	cc -c exit.c

