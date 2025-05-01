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

#receta archivo
archivo: bin/archivo
	./$<

bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)

#archivo binario
binario: bin/binario
	./$<

bin/binario: src/binario.cpp
	c++ $< -o $@ -I$(INCLUDE)

#Practica de listas
lista: bin/lista
	./$<

bin/lista: src/list.cpp
	c++ $< -o $@ -I$(INCLUDE)

#Practica de vector
vector: bin/vector
	./$<

bin/vector: src/vector.cpp
	c++ $< -o $@ -I$(INCLUDE)

#practica map
map: bin/map
	./$<

bin/map: src/map.cpp
	c++ $< -o $@ -I$(INCLUDE)

#practica set
set: bin/set
	./$<

bin/set: src/set.cpp
	c++ $< -o $@ -I$(INCLUDE)