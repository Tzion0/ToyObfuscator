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

# Utility rule file for install-LLVMRISCVInfo.

# Include any custom commands dependencies for this target.
include lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/progress.make

lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo: lib/libLLVMRISCVInfo.a
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/RISCV/TargetInfo && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT=LLVMRISCVInfo -P /home/lab/Documents/Toy-Obfuscator/build/cmake_install.cmake

install-LLVMRISCVInfo: lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo
install-LLVMRISCVInfo: lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/build.make
.PHONY : install-LLVMRISCVInfo

# Rule to build all files generated by this target.
lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/build: install-LLVMRISCVInfo
.PHONY : lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/build

lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/clean:
	cd /home/lab/Documents/Toy-Obfuscator/build/lib/Target/RISCV/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMRISCVInfo.dir/cmake_clean.cmake
.PHONY : lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/clean

lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/depend:
	cd /home/lab/Documents/Toy-Obfuscator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lab/Documents/Toy-Obfuscator/obfuscator /home/lab/Documents/Toy-Obfuscator/obfuscator/lib/Target/RISCV/TargetInfo /home/lab/Documents/Toy-Obfuscator/build /home/lab/Documents/Toy-Obfuscator/build/lib/Target/RISCV/TargetInfo /home/lab/Documents/Toy-Obfuscator/build/lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/RISCV/TargetInfo/CMakeFiles/install-LLVMRISCVInfo.dir/depend

