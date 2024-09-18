TARGET = executable

all: $(TARGET)

$(TARGET): main.cpp
	g++ -Iheaders classes/operations.cpp classes/person.cpp main.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)