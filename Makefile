all: fight.cpp Player.h squaretorec.cpp designcube.cpp
	g++ fight.cpp -o fight
	g++ squaretorec.cpp --std=c++11 -o squaretorec
	g++ designcube.cpp --std=c++11 -o designcube

