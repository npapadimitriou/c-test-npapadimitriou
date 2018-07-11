all: fight.cpp Player.h squaretorec.cpp
	g++ fight.cpp -o fight
	g++ squaretorec.cpp --std=c++11 -o squaretorec
