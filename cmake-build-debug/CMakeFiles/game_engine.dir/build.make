# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\prog\game_engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\prog\game_engine\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/game_engine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game_engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game_engine.dir/flags.make

CMakeFiles/game_engine.dir/main.cpp.obj: CMakeFiles/game_engine.dir/flags.make
CMakeFiles/game_engine.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\prog\game_engine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game_engine.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\game_engine.dir\main.cpp.obj -c D:\prog\game_engine\main.cpp

CMakeFiles/game_engine.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game_engine.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\prog\game_engine\main.cpp > CMakeFiles\game_engine.dir\main.cpp.i

CMakeFiles/game_engine.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game_engine.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\prog\game_engine\main.cpp -o CMakeFiles\game_engine.dir\main.cpp.s

# Object files for target game_engine
game_engine_OBJECTS = \
"CMakeFiles/game_engine.dir/main.cpp.obj"

# External object files for target game_engine
game_engine_EXTERNAL_OBJECTS =

game_engine.exe: CMakeFiles/game_engine.dir/main.cpp.obj
game_engine.exe: CMakeFiles/game_engine.dir/build.make
game_engine.exe: CMakeFiles/game_engine.dir/linklibs.rsp
game_engine.exe: CMakeFiles/game_engine.dir/objects1.rsp
game_engine.exe: CMakeFiles/game_engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\prog\game_engine\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable game_engine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\game_engine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game_engine.dir/build: game_engine.exe

.PHONY : CMakeFiles/game_engine.dir/build

CMakeFiles/game_engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\game_engine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/game_engine.dir/clean

CMakeFiles/game_engine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\prog\game_engine D:\prog\game_engine D:\prog\game_engine\cmake-build-debug D:\prog\game_engine\cmake-build-debug D:\prog\game_engine\cmake-build-debug\CMakeFiles\game_engine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game_engine.dir/depend

