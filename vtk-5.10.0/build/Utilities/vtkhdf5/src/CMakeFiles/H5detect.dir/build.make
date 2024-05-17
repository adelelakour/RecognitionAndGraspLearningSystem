# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /home/adelelakour/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/adelelakour/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build

# Include any dependencies generated for this target.
include Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/compiler_depend.make

# Include the progress variables for this target.
include Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/progress.make

# Include the compile flags for this target's objects.
include Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/flags.make

Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.o: Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/flags.make
Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.o: /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Utilities/vtkhdf5/src/H5detect.c
Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.o: Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.o"
	cd /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.o -MF CMakeFiles/H5detect.dir/H5detect.c.o.d -o CMakeFiles/H5detect.dir/H5detect.c.o -c /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Utilities/vtkhdf5/src/H5detect.c

Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/H5detect.dir/H5detect.c.i"
	cd /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Utilities/vtkhdf5/src/H5detect.c > CMakeFiles/H5detect.dir/H5detect.c.i

Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/H5detect.dir/H5detect.c.s"
	cd /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Utilities/vtkhdf5/src/H5detect.c -o CMakeFiles/H5detect.dir/H5detect.c.s

# Object files for target H5detect
H5detect_OBJECTS = \
"CMakeFiles/H5detect.dir/H5detect.c.o"

# External object files for target H5detect
H5detect_EXTERNAL_OBJECTS =

bin/H5detect: Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/H5detect.c.o
bin/H5detect: Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/build.make
bin/H5detect: Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../../../bin/H5detect"
	cd /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/H5detect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/build: bin/H5detect
.PHONY : Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/build

Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/clean:
	cd /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src && $(CMAKE_COMMAND) -P CMakeFiles/H5detect.dir/cmake_clean.cmake
.PHONY : Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/clean

Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/depend:
	cd /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0 /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Utilities/vtkhdf5/src /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Utilities/vtkhdf5/src/CMakeFiles/H5detect.dir/depend

