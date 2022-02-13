# chief_wolf
# February 13, 2022

cmake_minimum_required( VERSION 3.10 )

set( CMAKE_CXX_COMPILER /usr/bin/g++ )
set( CMAKE_CXX_COMPILER_FORCED True )

# Set the project name
project( WolfLib VERSION 0.1 )

# Set C++ Standard
set( CXX_STANDARD 11 )
set( CXX_STANDARD_REQUIRED True )

#target_include_directories( WolfLib PUBLIC
#                            ${PROJECT_BINARY_DIR}
#                            src)

# Add the excutable
add_executable(WolfLib src/main.cpp)
