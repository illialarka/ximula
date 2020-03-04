# set cmake versiont
cmake_minimum_required(VERSION 3.4)

# set circuit header files
set(CIRCUIT_HEADER_FILES
	include/wire.hpp
)

# set circuit source files
set(CIRCUI_SOURCE_FILES 
	wire.cpp
)

# create circuit library
add_library(circuit STATIC ${CIRCUIT_SOURCE_FILES} ${CIRCUIT_HEADER_FILES})
