cmake_minimum_required(VERSION 3.10)
project(MyOpenGLProject)

set(CMAKE_CXX_STANDARD 17)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Find GLUT
find_package(GLUT REQUIRED)

# Add executable
add_executable(MyOpenGLProject main.cpp)

# Link libraries
target_link_libraries(MyOpenGLProject PRIVATE OpenGL::GL GLUT::GLUT)
