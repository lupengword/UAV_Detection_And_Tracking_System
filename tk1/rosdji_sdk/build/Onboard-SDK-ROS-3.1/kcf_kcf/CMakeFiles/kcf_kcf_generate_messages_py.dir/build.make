# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/cc/rosdji_sdk/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/cc/rosdji_sdk/build

# Utility rule file for kcf_kcf_generate_messages_py.

# Include the progress variables for this target.
include Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/progress.make

Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py: /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/_Sendselect.py
Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py: /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/__init__.py

/home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/_Sendselect.py: /opt/ros/indigo/share/genpy/cmake/../../../lib/genpy/genmsg_py.py
/home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/_Sendselect.py: /home/ubuntu/cc/rosdji_sdk/src/Onboard-SDK-ROS-3.1/kcf_kcf/msg/Sendselect.msg
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/cc/rosdji_sdk/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating Python from MSG kcf_kcf/Sendselect"
	cd /home/ubuntu/cc/rosdji_sdk/build/Onboard-SDK-ROS-3.1/kcf_kcf && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/genpy/cmake/../../../lib/genpy/genmsg_py.py /home/ubuntu/cc/rosdji_sdk/src/Onboard-SDK-ROS-3.1/kcf_kcf/msg/Sendselect.msg -Ikcf_kcf:/home/ubuntu/cc/rosdji_sdk/src/Onboard-SDK-ROS-3.1/kcf_kcf/msg -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -p kcf_kcf -o /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg

/home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/__init__.py: /opt/ros/indigo/share/genpy/cmake/../../../lib/genpy/genmsg_py.py
/home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/__init__.py: /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/_Sendselect.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/cc/rosdji_sdk/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating Python msg __init__.py for kcf_kcf"
	cd /home/ubuntu/cc/rosdji_sdk/build/Onboard-SDK-ROS-3.1/kcf_kcf && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/genpy/cmake/../../../lib/genpy/genmsg_py.py -o /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg --initpy

kcf_kcf_generate_messages_py: Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py
kcf_kcf_generate_messages_py: /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/_Sendselect.py
kcf_kcf_generate_messages_py: /home/ubuntu/cc/rosdji_sdk/devel/lib/python2.7/dist-packages/kcf_kcf/msg/__init__.py
kcf_kcf_generate_messages_py: Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/build.make
.PHONY : kcf_kcf_generate_messages_py

# Rule to build all files generated by this target.
Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/build: kcf_kcf_generate_messages_py
.PHONY : Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/build

Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/clean:
	cd /home/ubuntu/cc/rosdji_sdk/build/Onboard-SDK-ROS-3.1/kcf_kcf && $(CMAKE_COMMAND) -P CMakeFiles/kcf_kcf_generate_messages_py.dir/cmake_clean.cmake
.PHONY : Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/clean

Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/depend:
	cd /home/ubuntu/cc/rosdji_sdk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/cc/rosdji_sdk/src /home/ubuntu/cc/rosdji_sdk/src/Onboard-SDK-ROS-3.1/kcf_kcf /home/ubuntu/cc/rosdji_sdk/build /home/ubuntu/cc/rosdji_sdk/build/Onboard-SDK-ROS-3.1/kcf_kcf /home/ubuntu/cc/rosdji_sdk/build/Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Onboard-SDK-ROS-3.1/kcf_kcf/CMakeFiles/kcf_kcf_generate_messages_py.dir/depend

