# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = "/home/caio/Área de trabalho/ufrrj/cg/teste2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/caio/Área de trabalho/ufrrj/cg/teste2"

# Include any dependencies generated for this target.
include CMakeFiles/FiltroGaussiano.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FiltroGaussiano.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FiltroGaussiano.dir/flags.make

CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.o: CMakeFiles/FiltroGaussiano.dir/flags.make
CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.o: FiltroGaussiano.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/caio/Área de trabalho/ufrrj/cg/teste2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.o -c "/home/caio/Área de trabalho/ufrrj/cg/teste2/FiltroGaussiano.cpp"

CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/caio/Área de trabalho/ufrrj/cg/teste2/FiltroGaussiano.cpp" > CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.i

CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/caio/Área de trabalho/ufrrj/cg/teste2/FiltroGaussiano.cpp" -o CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.s

# Object files for target FiltroGaussiano
FiltroGaussiano_OBJECTS = \
"CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.o"

# External object files for target FiltroGaussiano
FiltroGaussiano_EXTERNAL_OBJECTS =

FiltroGaussiano: CMakeFiles/FiltroGaussiano.dir/FiltroGaussiano.cpp.o
FiltroGaussiano: CMakeFiles/FiltroGaussiano.dir/build.make
FiltroGaussiano: /usr/local/lib/libopencv_dnn.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_gapi.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_highgui.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_ml.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_objdetect.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_photo.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_stitching.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_video.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_videoio.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_imgcodecs.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_calib3d.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_features2d.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_flann.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_imgproc.so.4.4.0
FiltroGaussiano: /usr/local/lib/libopencv_core.so.4.4.0
FiltroGaussiano: CMakeFiles/FiltroGaussiano.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/caio/Área de trabalho/ufrrj/cg/teste2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FiltroGaussiano"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FiltroGaussiano.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FiltroGaussiano.dir/build: FiltroGaussiano

.PHONY : CMakeFiles/FiltroGaussiano.dir/build

CMakeFiles/FiltroGaussiano.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FiltroGaussiano.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FiltroGaussiano.dir/clean

CMakeFiles/FiltroGaussiano.dir/depend:
	cd "/home/caio/Área de trabalho/ufrrj/cg/teste2" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/caio/Área de trabalho/ufrrj/cg/teste2" "/home/caio/Área de trabalho/ufrrj/cg/teste2" "/home/caio/Área de trabalho/ufrrj/cg/teste2" "/home/caio/Área de trabalho/ufrrj/cg/teste2" "/home/caio/Área de trabalho/ufrrj/cg/teste2/CMakeFiles/FiltroGaussiano.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/FiltroGaussiano.dir/depend

