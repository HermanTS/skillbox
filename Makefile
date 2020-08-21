CC=g++

EXECUTABLE=skillbox

CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp 
SOURCES+=Vector.cpp 
SOURCES+=DynamicMatrix.cpp

#lesson virtual functions
SOURCES+=Vehicle.cpp
SOURCES+=RoadVehicle.cpp
SOURCES+=VehicleParts.cpp
SOURCES+=Car.cpp


OBJECTS=$(SOURCES:.cpp=.o)


all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
