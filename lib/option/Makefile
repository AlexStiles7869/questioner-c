# Makefile for option library

SRC_DIR := src
OBJ_DIR := obj
INC_DIR := include
BUILD_DIR := build

SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

CFLAGS = -Wall -Werror -Wextra

option.a: $(OBJ_FILES)
	gcc -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc $(CXXFLAGS) $(CFLAGS) -c -o $@ $<

CXXFLAGS += -MMD
-include $(OBJ_FILES:.o=.d)
