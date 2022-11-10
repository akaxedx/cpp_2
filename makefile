main.exe:Return.o
	g++ -Wall *.o -o $@
%.o:%.c
	g++ -Wall -c $< -o $@
 clean:
	rm -f *.o main.exe
