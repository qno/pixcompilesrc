cmake_minimum_required(VERSION 3.8)
project (testpi)
add_executable (testpixc main.cxx)
install (TARGETS testpixc DESTINATION bin)
