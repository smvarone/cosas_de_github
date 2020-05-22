#!/bin/bash
echo Primero compilamos el main.
g++ main.cpp 
./a.out>datos.txt

echo Segundo, utilizamos los datos anteriores para poder hacer la gráfica.
python grafica.py