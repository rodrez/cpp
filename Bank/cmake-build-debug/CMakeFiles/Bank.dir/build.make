# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Bank.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bank.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bank.dir/flags.make

CMakeFiles/Bank.dir/main.cpp.obj: CMakeFiles/Bank.dir/flags.make
CMakeFiles/Bank.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bank.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Bank.dir\main.cpp.obj -c C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\main.cpp

CMakeFiles/Bank.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bank.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\main.cpp > CMakeFiles\Bank.dir\main.cpp.i

CMakeFiles/Bank.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bank.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\main.cpp -o CMakeFiles\Bank.dir\main.cpp.s

CMakeFiles/Bank.dir/InvestCalculator.cpp.obj: CMakeFiles/Bank.dir/flags.make
CMakeFiles/Bank.dir/InvestCalculator.cpp.obj: ../InvestCalculator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Bank.dir/InvestCalculator.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Bank.dir\InvestCalculator.cpp.obj -c C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\InvestCalculator.cpp

CMakeFiles/Bank.dir/InvestCalculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bank.dir/InvestCalculator.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\InvestCalculator.cpp > CMakeFiles\Bank.dir\InvestCalculator.cpp.i

CMakeFiles/Bank.dir/InvestCalculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bank.dir/InvestCalculator.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\InvestCalculator.cpp -o CMakeFiles\Bank.dir\InvestCalculator.cpp.s

# Object files for target Bank
Bank_OBJECTS = \
"CMakeFiles/Bank.dir/main.cpp.obj" \
"CMakeFiles/Bank.dir/InvestCalculator.cpp.obj"

# External object files for target Bank
Bank_EXTERNAL_OBJECTS =

Bank.exe: CMakeFiles/Bank.dir/main.cpp.obj
Bank.exe: CMakeFiles/Bank.dir/InvestCalculator.cpp.obj
Bank.exe: CMakeFiles/Bank.dir/build.make
Bank.exe: CMakeFiles/Bank.dir/linklibs.rsp
Bank.exe: CMakeFiles/Bank.dir/objects1.rsp
Bank.exe: CMakeFiles/Bank.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Bank.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bank.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bank.dir/build: Bank.exe

.PHONY : CMakeFiles/Bank.dir/build

CMakeFiles/Bank.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bank.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bank.dir/clean

CMakeFiles/Bank.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug C:\Users\fjrod\OneDrive\Desktop\Code\CPP\Bank\cmake-build-debug\CMakeFiles\Bank.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bank.dir/depend

