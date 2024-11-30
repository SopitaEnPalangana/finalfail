g++ -I./include -c ./src/sucursal.cpp
g++ -I./include -c ./src/empleado.cpp
g++ -I./include -c ./src/casamadre.cpp
g++ -I./include -c ./src/empresas.cpp
g++ -I./include -c ./src/particular.cpp
g++ -I./include -c ./src/profesional.cpp
g++ -I./include -c main.cpp

g++ sucursal.o casamadre.o empleado.o empresas.o particular.o profesional.o main.o -o app.exe

DEL *.o

app.exe