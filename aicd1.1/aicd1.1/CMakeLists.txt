# CMakeList.txt : CMake project for aicd1.1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (aicd1.1 "Matrix.cpp" "Matrix.h" "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET aicd1.1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
