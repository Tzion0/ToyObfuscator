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
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/flags.make

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/flags.make
lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp
lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o -MF CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o.d -o CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp > CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.i

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp -o CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.s

# Object files for target LLVMLanaiInstPrinter
LLVMLanaiInstPrinter_OBJECTS = \
"CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o"

# External object files for target LLVMLanaiInstPrinter
LLVMLanaiInstPrinter_EXTERNAL_OBJECTS =

lib/libLLVMLanaiInstPrinter.a: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/LanaiInstPrinter.cpp.o
lib/libLLVMLanaiInstPrinter.a: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/build.make
lib/libLLVMLanaiInstPrinter.a: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMLanaiInstPrinter.a"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLanaiInstPrinter.dir/cmake_clean_target.cmake
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMLanaiInstPrinter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/build: lib/libLLVMLanaiInstPrinter.a
.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/build

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/clean:
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLanaiInstPrinter.dir/cmake_clean.cmake
.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/clean

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/depend:
	cd /home/lab/Documents/Toy-Obfuscator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lab/Documents/Toy-Obfuscator/obfuscator /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/Target/Lanai/InstPrinter /home/lab/Documents/Toy-Obfuscator/build /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter /home/lab/Documents/Toy-Obfuscator/build/lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiInstPrinter.dir/depend

