all: parse_args.c
	gcc parse_args.c
run: all
	./a.out
clean:
	rm a.out
	rm *~
