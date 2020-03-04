# cmake required version
cmake_minimum_required(VERSION 3.4)

# set global version
set(XIMULA_VERSION 1.0.0)

# set the cpp standard
set(CMAKE_CXX_STANDARD 11)

# project specofication
project(ximula VERSION ${XIMULA_VERSION}
							 DESCRIPTION "Software implementation of 8-bit CPU"
							 LANGUAGES CXX)

# override default location for instalation file
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

# create variables for destination folders
set(XIMULA_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(XIMULA_ISNTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(XIMULA_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

# add subdirectories
# add_subdirectory(src)
add_subdirectory(tests)

# include child libs headers file
# target include lib

# install 
install(TARGETS ximula_tests DESTINATION bin)


