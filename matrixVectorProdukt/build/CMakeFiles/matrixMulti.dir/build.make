# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eric/Documents/cpp_dev/matrixVectorProdukt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/Documents/cpp_dev/matrixVectorProdukt/build

# Include any dependencies generated for this target.
include CMakeFiles/matrixMulti.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/matrixMulti.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrixMulti.dir/flags.make

CMakeFiles/matrixMulti.dir/matrixMulti.cpp.o: CMakeFiles/matrixMulti.dir/flags.make
CMakeFiles/matrixMulti.dir/matrixMulti.cpp.o: ../matrixMulti.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Documents/cpp_dev/matrixVectorProdukt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/matrixMulti.dir/matrixMulti.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrixMulti.dir/matrixMulti.cpp.o -c /home/eric/Documents/cpp_dev/matrixVectorProdukt/matrixMulti.cpp

CMakeFiles/matrixMulti.dir/matrixMulti.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixMulti.dir/matrixMulti.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Documents/cpp_dev/matrixVectorProdukt/matrixMulti.cpp > CMakeFiles/matrixMulti.dir/matrixMulti.cpp.i

CMakeFiles/matrixMulti.dir/matrixMulti.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixMulti.dir/matrixMulti.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Documents/cpp_dev/matrixVectorProdukt/matrixMulti.cpp -o CMakeFiles/matrixMulti.dir/matrixMulti.cpp.s

# Object files for target matrixMulti
matrixMulti_OBJECTS = \
"CMakeFiles/matrixMulti.dir/matrixMulti.cpp.o"

# External object files for target matrixMulti
matrixMulti_EXTERNAL_OBJECTS =

bin/matrixMulti: CMakeFiles/matrixMulti.dir/matrixMulti.cpp.o
bin/matrixMulti: CMakeFiles/matrixMulti.dir/build.make
bin/matrixMulti: CMakeFiles/matrixMulti.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Documents/cpp_dev/matrixVectorProdukt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/matrixMulti"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixMulti.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrixMulti.dir/build: bin/matrixMulti

.PHONY : CMakeFiles/matrixMulti.dir/build

CMakeFiles/matrixMulti.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrixMulti.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrixMulti.dir/clean

CMakeFiles/matrixMulti.dir/depend:
	cd /home/eric/Documents/cpp_dev/matrixVectorProdukt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Documents/cpp_dev/matrixVectorProdukt /home/eric/Documents/cpp_dev/matrixVectorProdukt /home/eric/Documents/cpp_dev/matrixVectorProdukt/build /home/eric/Documents/cpp_dev/matrixVectorProdukt/build /home/eric/Documents/cpp_dev/matrixVectorProdukt/build/CMakeFiles/matrixMulti.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/matrixMulti.dir/depend
