# define the compiler 
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17

# target executable name 
TARGET = main

SRC = main.cpp

OBJF = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJF)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJF)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean: 
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean

