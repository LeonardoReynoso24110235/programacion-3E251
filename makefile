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
PRACTICAS = ejecutable

EXE2 := $(BIN)/$(PRACTICAS)

$(EXE2) : $(SRC)/memoria.cpp #nombre archivo
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run2: $(EXE2)
	./$<

clean2 :
	rm $(BIN)/*