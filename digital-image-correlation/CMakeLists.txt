# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(CppStepsSearch VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Specify the source files
set(SOURCES
    src/main.cpp
    src/StepsSearch.cpp
    src/EvalPoints.cpp
    src/ImageProcessing.cpp
)

# Create the executable from the source files
add_executable(CppStepsSearch ${SOURCES})

# Optionally, you can specify additional libraries to link against
# target_link_libraries(CppStepsSearch <library_name>)

