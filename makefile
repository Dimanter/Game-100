CFLAGS = -Wall -Werror

OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder Game.exe

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


clean:
	rm build/*.o
	rm *.exe
	rm -R build