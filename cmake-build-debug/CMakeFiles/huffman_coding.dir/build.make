# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\asus\CLionProjects\huffman-coding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/huffman_coding.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/huffman_coding.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/huffman_coding.dir/flags.make

CMakeFiles/huffman_coding.dir/main.cpp.obj: CMakeFiles/huffman_coding.dir/flags.make
CMakeFiles/huffman_coding.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/huffman_coding.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\huffman_coding.dir\main.cpp.obj -c C:\Users\asus\CLionProjects\huffman-coding\main.cpp

CMakeFiles/huffman_coding.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman_coding.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\asus\CLionProjects\huffman-coding\main.cpp > CMakeFiles\huffman_coding.dir\main.cpp.i

CMakeFiles/huffman_coding.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman_coding.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\asus\CLionProjects\huffman-coding\main.cpp -o CMakeFiles\huffman_coding.dir\main.cpp.s

CMakeFiles/huffman_coding.dir/Huffman.cpp.obj: CMakeFiles/huffman_coding.dir/flags.make
CMakeFiles/huffman_coding.dir/Huffman.cpp.obj: ../Huffman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/huffman_coding.dir/Huffman.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\huffman_coding.dir\Huffman.cpp.obj -c C:\Users\asus\CLionProjects\huffman-coding\Huffman.cpp

CMakeFiles/huffman_coding.dir/Huffman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman_coding.dir/Huffman.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\asus\CLionProjects\huffman-coding\Huffman.cpp > CMakeFiles\huffman_coding.dir\Huffman.cpp.i

CMakeFiles/huffman_coding.dir/Huffman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman_coding.dir/Huffman.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\asus\CLionProjects\huffman-coding\Huffman.cpp -o CMakeFiles\huffman_coding.dir\Huffman.cpp.s

CMakeFiles/huffman_coding.dir/Node.cpp.obj: CMakeFiles/huffman_coding.dir/flags.make
CMakeFiles/huffman_coding.dir/Node.cpp.obj: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/huffman_coding.dir/Node.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\huffman_coding.dir\Node.cpp.obj -c C:\Users\asus\CLionProjects\huffman-coding\Node.cpp

CMakeFiles/huffman_coding.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/huffman_coding.dir/Node.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\asus\CLionProjects\huffman-coding\Node.cpp > CMakeFiles\huffman_coding.dir\Node.cpp.i

CMakeFiles/huffman_coding.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/huffman_coding.dir/Node.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\asus\CLionProjects\huffman-coding\Node.cpp -o CMakeFiles\huffman_coding.dir\Node.cpp.s

# Object files for target huffman_coding
huffman_coding_OBJECTS = \
"CMakeFiles/huffman_coding.dir/main.cpp.obj" \
"CMakeFiles/huffman_coding.dir/Huffman.cpp.obj" \
"CMakeFiles/huffman_coding.dir/Node.cpp.obj"

# External object files for target huffman_coding
huffman_coding_EXTERNAL_OBJECTS =

huffman_coding.exe: CMakeFiles/huffman_coding.dir/main.cpp.obj
huffman_coding.exe: CMakeFiles/huffman_coding.dir/Huffman.cpp.obj
huffman_coding.exe: CMakeFiles/huffman_coding.dir/Node.cpp.obj
huffman_coding.exe: CMakeFiles/huffman_coding.dir/build.make
huffman_coding.exe: CMakeFiles/huffman_coding.dir/linklibs.rsp
huffman_coding.exe: CMakeFiles/huffman_coding.dir/objects1.rsp
huffman_coding.exe: CMakeFiles/huffman_coding.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable huffman_coding.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\huffman_coding.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/huffman_coding.dir/build: huffman_coding.exe

.PHONY : CMakeFiles/huffman_coding.dir/build

CMakeFiles/huffman_coding.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\huffman_coding.dir\cmake_clean.cmake
.PHONY : CMakeFiles/huffman_coding.dir/clean

CMakeFiles/huffman_coding.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\asus\CLionProjects\huffman-coding C:\Users\asus\CLionProjects\huffman-coding C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug C:\Users\asus\CLionProjects\huffman-coding\cmake-build-debug\CMakeFiles\huffman_coding.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/huffman_coding.dir/depend

