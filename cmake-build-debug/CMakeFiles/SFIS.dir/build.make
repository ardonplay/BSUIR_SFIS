# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vladimir/Desktop/BSUIR_SFIS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SFIS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SFIS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SFIS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SFIS.dir/flags.make

CMakeFiles/SFIS.dir/main.cpp.o: CMakeFiles/SFIS.dir/flags.make
CMakeFiles/SFIS.dir/main.cpp.o: ../main.cpp
CMakeFiles/SFIS.dir/main.cpp.o: CMakeFiles/SFIS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SFIS.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SFIS.dir/main.cpp.o -MF CMakeFiles/SFIS.dir/main.cpp.o.d -o CMakeFiles/SFIS.dir/main.cpp.o -c /Users/vladimir/Desktop/BSUIR_SFIS/main.cpp

CMakeFiles/SFIS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFIS.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vladimir/Desktop/BSUIR_SFIS/main.cpp > CMakeFiles/SFIS.dir/main.cpp.i

CMakeFiles/SFIS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFIS.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vladimir/Desktop/BSUIR_SFIS/main.cpp -o CMakeFiles/SFIS.dir/main.cpp.s

# Object files for target SFIS
SFIS_OBJECTS = \
"CMakeFiles/SFIS.dir/main.cpp.o"

# External object files for target SFIS
SFIS_EXTERNAL_OBJECTS =

SFIS: CMakeFiles/SFIS.dir/main.cpp.o
SFIS: CMakeFiles/SFIS.dir/build.make
SFIS: CMakeFiles/SFIS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SFIS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SFIS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SFIS.dir/build: SFIS
.PHONY : CMakeFiles/SFIS.dir/build

CMakeFiles/SFIS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SFIS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SFIS.dir/clean

CMakeFiles/SFIS.dir/depend:
	cd /Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vladimir/Desktop/BSUIR_SFIS /Users/vladimir/Desktop/BSUIR_SFIS /Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug /Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug /Users/vladimir/Desktop/BSUIR_SFIS/cmake-build-debug/CMakeFiles/SFIS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SFIS.dir/depend

