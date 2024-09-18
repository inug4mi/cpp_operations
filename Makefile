TARGET = executable

all: $(TARGET)

$(TARGET): main.cpp
	g++ operations.cpp main.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)