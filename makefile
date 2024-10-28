Task1:	Task1.c
	gcc -o Task1 Task1.c
Task1b: Task1b.c
	gcc -o Task1b Task1b.c
Task2:	Task2.c
	gcc -o Task2 Task2.c
Task3: Task3.c
	gcc -o Task3 Task3.c
Task4: Task4.c
	gcc -o Task4 Task4.c
Task5: Task5.c
	gcc -o Task5 Task5.c
all: Task1 Task1b Task2 Task3 Task4 Task5

clean:
	rm -f Task1 Task1b Task2 Task3 Task4 Task5




