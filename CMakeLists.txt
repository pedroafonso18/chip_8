cmake_minimum_required(VERSION 3.31)
project(
	Chip-8
	VERSION 1.0
	LANGUAGES CXX
)

find_package(SDL2 REQUIRED)

add_executable(
	Chip-8	
  src/*.cpp
	include/*.h
)

target_link_libraries(Chip-8 SDL2::SDL2)

