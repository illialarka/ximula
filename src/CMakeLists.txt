# set cmake version
cmake_minimum_required(VERSION 3.4)

# set ximula source files
set(XIMULA_SOURCE_FILES
	main.cpp)

# subdirectories

# exec
add_executable(ximula ${XIMULA_SOURCE_FILES})

# link target libs

# include header files

# install
install(TARGETS ximula DESTINATION ${XIMULA_INSTALL_BIN_DIR})
