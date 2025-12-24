cmake_minimum_required(VERSION 3.31)
project(
	Chip-8
	VERSION 1.0
	LANGUAGES CXX
)


add_executable(
	Chip-8	
  src/Chip8.cpp
	src/main.cpp
	src/Platform.cpp
	include/Chip8.h
	include/Platform.h
)

find_package(SDL2 REQUIRED)

target_link_libraries(Chip-8 SDL2::SDL2)
