# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yeni/CLionProjects/DepositCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yeni/CLionProjects/DepositCalc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DepositCalc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DepositCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DepositCalc.dir/flags.make

CMakeFiles/DepositCalc.dir/main.c.o: CMakeFiles/DepositCalc.dir/flags.make
CMakeFiles/DepositCalc.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yeni/CLionProjects/DepositCalc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DepositCalc.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DepositCalc.dir/main.c.o   -c /Users/yeni/CLionProjects/DepositCalc/main.c

CMakeFiles/DepositCalc.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DepositCalc.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yeni/CLionProjects/DepositCalc/main.c > CMakeFiles/DepositCalc.dir/main.c.i

CMakeFiles/DepositCalc.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DepositCalc.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yeni/CLionProjects/DepositCalc/main.c -o CMakeFiles/DepositCalc.dir/main.c.s

# Object files for target DepositCalc
DepositCalc_OBJECTS = \
"CMakeFiles/DepositCalc.dir/main.c.o"

# External object files for target DepositCalc
DepositCalc_EXTERNAL_OBJECTS =

DepositCalc: CMakeFiles/DepositCalc.dir/main.c.o
DepositCalc: CMakeFiles/DepositCalc.dir/build.make
DepositCalc: CMakeFiles/DepositCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yeni/CLionProjects/DepositCalc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable DepositCalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DepositCalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DepositCalc.dir/build: DepositCalc

.PHONY : CMakeFiles/DepositCalc.dir/build

CMakeFiles/DepositCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DepositCalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DepositCalc.dir/clean

CMakeFiles/DepositCalc.dir/depend:
	cd /Users/yeni/CLionProjects/DepositCalc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yeni/CLionProjects/DepositCalc /Users/yeni/CLionProjects/DepositCalc /Users/yeni/CLionProjects/DepositCalc/cmake-build-debug /Users/yeni/CLionProjects/DepositCalc/cmake-build-debug /Users/yeni/CLionProjects/DepositCalc/cmake-build-debug/CMakeFiles/DepositCalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DepositCalc.dir/depend

