# set cmake version
cmake_minimum_required(VERSION 3.4)

# set ximula source files
set(XIMULA_SOURCE_FILES
	main.cpp)

# subdirectories
add_subdirectory(circuit)

# exec
add_executable(ximula ${XIMULA_SOURCE_FILES})

# link target libs
target_link_libraries(ximula circuit)

# include header files
target_include_directories(ximula PUBLIC 
	circuit/include)

# install
install(TARGETS ximula DESTINATION ${XIMULA_INSTALL_BIN_DIR})
