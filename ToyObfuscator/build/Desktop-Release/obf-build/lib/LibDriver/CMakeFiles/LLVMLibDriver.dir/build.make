# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lab/Documents/Toy-Obfuscator/obfuscator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lab/Documents/Toy-Obfuscator/build

# Include any dependencies generated for this target.
include lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/progress.make

# Include the compile flags for this target's objects.
include lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/flags.make

lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o: lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/flags.make
lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/LibDriver/LibDriver.cpp
lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o: lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o -MF CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o.d -o CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/LibDriver/LibDriver.cpp

lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/LibDriver/LibDriver.cpp > CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.i

lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/LibDriver/LibDriver.cpp -o CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.s

# Object files for target LLVMLibDriver
LLVMLibDriver_OBJECTS = \
"CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o"

# External object files for target LLVMLibDriver
LLVMLibDriver_EXTERNAL_OBJECTS =

lib/libLLVMLibDriver.a: lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/LibDriver.cpp.o
lib/libLLVMLibDriver.a: lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/build.make
lib/libLLVMLibDriver.a: lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../libLLVMLibDriver.a"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLibDriver.dir/cmake_clean_target.cmake
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMLibDriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/build: lib/libLLVMLibDriver.a
.PHONY : lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/build

lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/clean:
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLibDriver.dir/cmake_clean.cmake
.PHONY : lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/clean

lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/depend:
	cd /home/lab/Documents/Toy-Obfuscator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lab/Documents/Toy-Obfuscator/obfuscator /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/LibDriver /home/lab/Documents/Toy-Obfuscator/build /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver /home/lab/Documents/Toy-Obfuscator/build/lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/LibDriver/CMakeFiles/LLVMLibDriver.dir/depend

