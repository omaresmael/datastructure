# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Users\Dell11\C++\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Dell11\C++\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dell11\my-Github\datastructure\Queues

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dell11\my-Github\datastructure\Queues\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Queues.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Queues.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Queues.dir/flags.make

CMakeFiles/Queues.dir/main.cpp.obj: CMakeFiles/Queues.dir/flags.make
CMakeFiles/Queues.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dell11\my-Github\datastructure\Queues\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Queues.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Queues.dir\main.cpp.obj -c C:\Users\Dell11\my-Github\datastructure\Queues\main.cpp

CMakeFiles/Queues.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Queues.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Dell11\my-Github\datastructure\Queues\main.cpp > CMakeFiles\Queues.dir\main.cpp.i

CMakeFiles/Queues.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Queues.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Dell11\my-Github\datastructure\Queues\main.cpp -o CMakeFiles\Queues.dir\main.cpp.s

# Object files for target Queues
Queues_OBJECTS = \
"CMakeFiles/Queues.dir/main.cpp.obj"

# External object files for target Queues
Queues_EXTERNAL_OBJECTS =

Queues.exe: CMakeFiles/Queues.dir/main.cpp.obj
Queues.exe: CMakeFiles/Queues.dir/build.make
Queues.exe: CMakeFiles/Queues.dir/linklibs.rsp
Queues.exe: CMakeFiles/Queues.dir/objects1.rsp
Queues.exe: CMakeFiles/Queues.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dell11\my-Github\datastructure\Queues\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Queues.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Queues.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Queues.dir/build: Queues.exe

.PHONY : CMakeFiles/Queues.dir/build

CMakeFiles/Queues.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Queues.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Queues.dir/clean

CMakeFiles/Queues.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dell11\my-Github\datastructure\Queues C:\Users\Dell11\my-Github\datastructure\Queues C:\Users\Dell11\my-Github\datastructure\Queues\cmake-build-debug C:\Users\Dell11\my-Github\datastructure\Queues\cmake-build-debug C:\Users\Dell11\my-Github\datastructure\Queues\cmake-build-debug\CMakeFiles\Queues.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Queues.dir/depend
