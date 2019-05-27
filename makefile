CFLAGS = -Wall -Werror

OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder Game.exe tests

folder:
	mkdir -p build 
 

Game.exe : build/check.o build/conclusion.o build/main.o 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/main.h 
	$(OBJ)

build/check.o : src/check.cpp src/main.h 
	$(OBJ)

build/conclusion.o : src/conclusion.cpp src/main.h 
	$(OBJ)

tests: build/test.o  build/first_test.o 
	gcc -Wall build/test.o build/first_test.o -o tests

build/test.o: test/test.c
	gcc -Wall -c test/test.c -o build/test.o -Itest

build/first_test.o: test/first_test.c
	gcc -Wall -c test/first_test.c -o build/first_test.o -Itest


clean:
	rm build/*.o
	rm *.exe
	rm -R build
	rm tests