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
include lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/progress.make

# Include the compile flags for this target's objects.
include lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/YAML.cpp
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o -MF CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o.d -o CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/YAML.cpp

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/YAML.cpp > CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.i

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/YAML.cpp -o CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.s

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/COFFYAML.cpp
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o -MF CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o.d -o CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/COFFYAML.cpp

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/COFFYAML.cpp > CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.i

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/COFFYAML.cpp -o CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.s

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ELFYAML.cpp
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o -MF CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o.d -o CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ELFYAML.cpp

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ELFYAML.cpp > CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.i

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ELFYAML.cpp -o CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.s

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/MachOYAML.cpp
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o -MF CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o.d -o CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/MachOYAML.cpp

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/MachOYAML.cpp > CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.i

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/MachOYAML.cpp -o CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.s

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ObjectYAML.cpp
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o -MF CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o.d -o CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ObjectYAML.cpp

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ObjectYAML.cpp > CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.i

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/ObjectYAML.cpp -o CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.s

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/flags.make
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o: /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/DWARFYAML.cpp
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o -MF CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o.d -o CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o -c /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/DWARFYAML.cpp

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.i"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/DWARFYAML.cpp > CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.i

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.s"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML/DWARFYAML.cpp -o CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.s

# Object files for target LLVMObjectYAML
LLVMObjectYAML_OBJECTS = \
"CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o" \
"CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o" \
"CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o" \
"CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o" \
"CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o" \
"CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o"

# External object files for target LLVMObjectYAML
LLVMObjectYAML_EXTERNAL_OBJECTS =

lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/YAML.cpp.o
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/COFFYAML.cpp.o
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ELFYAML.cpp.o
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/MachOYAML.cpp.o
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/ObjectYAML.cpp.o
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DWARFYAML.cpp.o
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/build.make
lib/libLLVMObjectYAML.a: lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lab/Documents/Toy-Obfuscator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../libLLVMObjectYAML.a"
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && $(CMAKE_COMMAND) -P CMakeFiles/LLVMObjectYAML.dir/cmake_clean_target.cmake
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMObjectYAML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/build: lib/libLLVMObjectYAML.a
.PHONY : lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/build

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/clean:
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML && $(CMAKE_COMMAND) -P CMakeFiles/LLVMObjectYAML.dir/cmake_clean.cmake
.PHONY : lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/clean

lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/depend:
	cd /home/lab/Documents/Toy-Obfuscator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lab/Documents/Toy-Obfuscator/obfuscator /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/ObjectYAML /home/lab/Documents/Toy-Obfuscator/build /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML /home/lab/Documents/Toy-Obfuscator/build/lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/ObjectYAML/CMakeFiles/LLVMObjectYAML.dir/depend

