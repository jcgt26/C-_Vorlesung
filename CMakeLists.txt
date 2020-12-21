cmake_minimum_required(VERSION 3.17)
project(praktikum_widerstand)

set(CMAKE_CXX_STANDARD 17)

add_executable(praktikum_widerstand main.cpp Decoder.cpp Decoder.h Resistor.cpp Resistor.h Band.h VoltageSource.cpp VoltageSource.h Piece.cpp Piece.h Circuit.cpp Circuit.h)