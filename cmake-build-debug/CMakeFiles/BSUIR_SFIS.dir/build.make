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
CMAKE_SOURCE_DIR = /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BSUIR_SFIS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BSUIR_SFIS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BSUIR_SFIS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BSUIR_SFIS.dir/flags.make

CMakeFiles/BSUIR_SFIS.dir/main.cpp.o: CMakeFiles/BSUIR_SFIS.dir/flags.make
CMakeFiles/BSUIR_SFIS.dir/main.cpp.o: ../main.cpp
CMakeFiles/BSUIR_SFIS.dir/main.cpp.o: CMakeFiles/BSUIR_SFIS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BSUIR_SFIS.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BSUIR_SFIS.dir/main.cpp.o -MF CMakeFiles/BSUIR_SFIS.dir/main.cpp.o.d -o CMakeFiles/BSUIR_SFIS.dir/main.cpp.o -c /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/main.cpp

CMakeFiles/BSUIR_SFIS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BSUIR_SFIS.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/main.cpp > CMakeFiles/BSUIR_SFIS.dir/main.cpp.i

CMakeFiles/BSUIR_SFIS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BSUIR_SFIS.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/main.cpp -o CMakeFiles/BSUIR_SFIS.dir/main.cpp.s

# Object files for target BSUIR_SFIS
BSUIR_SFIS_OBJECTS = \
"CMakeFiles/BSUIR_SFIS.dir/main.cpp.o"

# External object files for target BSUIR_SFIS
BSUIR_SFIS_EXTERNAL_OBJECTS =

BSUIR_SFIS: CMakeFiles/BSUIR_SFIS.dir/main.cpp.o
BSUIR_SFIS: CMakeFiles/BSUIR_SFIS.dir/build.make
BSUIR_SFIS: CMakeFiles/BSUIR_SFIS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BSUIR_SFIS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BSUIR_SFIS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BSUIR_SFIS.dir/build: BSUIR_SFIS
.PHONY : CMakeFiles/BSUIR_SFIS.dir/build

CMakeFiles/BSUIR_SFIS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BSUIR_SFIS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BSUIR_SFIS.dir/clean

CMakeFiles/BSUIR_SFIS.dir/depend:
	cd /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug /Users/glebchanskiy/Desktop/subjects/TMOIC/BSUIR_SFIS/cmake-build-debug/CMakeFiles/BSUIR_SFIS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BSUIR_SFIS.dir/depend

