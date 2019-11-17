
FLAGS = -Wall -g

make:

mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o

mymathd: power.o basicMath.o
	gcc -shared -o libmyMath.so power.o basicMath.o

power.o: power.c myMath.h
	gcc $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	gcc $(FLAGS) -c basicMath.c
	
mains: main.o mymaths
	gcc $(FLAGS) -o mains main.o libmyMath.a

maind: main.o mymathd
	gcc $(FLAGS) -o maind main.o ./libmyMath.so

main.o: main.c myMath.h
	gcc $(FLAGS) -c main.c

all: mymaths mymathd mains maind

clean:
	rm -f *.o *.a *.so mains maind 
