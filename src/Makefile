NAMEPROG=way
CPP=g++

$(NAMEPROG): main.o task.o
	$(CPP) -o $(NAMEPROG) main.o task.o

main.o: main.cpp
	$(CPP) -c main.cpp

task.o: task.cpp
	$(CPP) -c task.cpp

clean:
	rm -rf *.o $(NAMEPROG)
