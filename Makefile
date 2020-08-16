CC=g++

EXECUTABLE=skillbox

CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp 
SOURCES+=Vector.cpp 
OBJECTS=$(SOURCES:.cpp=.o)


all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@