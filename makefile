#Programas
PROYECTO = programa

LIB := -lftxui-component -lftxui-dom -lftxui-screen 
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

$(EXE) : $(SRC)/main.cpp #nombre archivo
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run: $(EXE)
	./$<

clean :
	rm $(BIN)/*

#Practicas
practicas: bin/ejecutable
	./$<

bin/ejecutable: src/memoria.cpp
	c++ $< -o $@ -I$(INCLUDE)

archivo: bin/archivo
	./$<

bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)