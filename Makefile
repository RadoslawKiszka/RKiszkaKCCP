# ZadClassKcpp/Makefile

# Kompilator i flagi
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Foldery
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

# Pliki źródłowe i obiektowe
SRCS = $(wildcard $(SRC_DIR)/*.cc) main.cc
OBJS = $(SRCS:.cc=.o)

# Plik wykonywalny
TARGET = $(BIN_DIR)/ZadKcpp

# Reguła do budowania wszystkiego
all: $(TARGET)

# Reguła budowania programu
$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Reguła budowania plików obiektowych
%.o: %.cc | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Reguły tworzenia katalogów, jeśli nie istnieją
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Reguła czyszczenia plików obiektowych i wykonywalnych
clean:
	rm -rf $(OBJS) $(TARGET)

# Reguła czyszczenia katalogów
cleanall: clean
	rm -rf $(BIN_DIR) $(OBJ_DIR)

# Pomocnicza reguła
.PHONY: all clean cleanall
