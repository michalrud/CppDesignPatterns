PROG_NAME=Strategy
CXXFLAGS=-std=c++14 -Wall -MMD -I src
CPP_FILES = $(wildcard src/*.cpp)
OBJ_FILES = $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))


all: $(PROG_NAME)

$(PROG_NAME): $(OBJ_FILES)
	g++ -o $(PROG_NAME) $^

obj/%.o: src/%.cpp
	g++ -c -o $@ $< $(CXXFLAGS)

.PHONY: clean
clean:
	rm -rf $(PROG_NAME) obj/*

-include $(OBJ_FILES:.o=.d)
