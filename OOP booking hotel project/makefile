# setting for compiler
CC = g++
CFLAGS = -std=c++11 -Wall
INC_DIR = -Iinclude

# directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# source of the files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
EXECUTABLE = $(BIN_DIR)/main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(INC_DIR) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC_DIR) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
