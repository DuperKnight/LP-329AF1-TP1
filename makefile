compiler = cc

.PHONY : all clean

all : execute

execute : main.exe
	./main.exe

main.exe : main-team-9.o functions-team-9.o
	$(compiler) -o $@ main-team-9.o functions-team-9.o -lm
	
%.o : %.c
	$(compiler) -c $<

clean :
	 rm *.o
	 rm *.exe
	 @echo "Ficheiros removidos."
