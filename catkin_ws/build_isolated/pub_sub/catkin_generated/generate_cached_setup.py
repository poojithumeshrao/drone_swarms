# -*- coding: utf-8 -*-
from __future__ import print_function
import argparse
import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/kinetic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/kinetic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in "/home/poojith/catkin_ws/devel_isolated/offb_ex;/home/poojith/catkin_ws/devel_isolated/mavros_extras;/home/poojith/catkin_ws/devel_isolated/first_example;/home/poojith/catkin_ws/devel_isolated/controller;/home/poojith/catkin_ws/devel_isolated/mavros;/home/poojith/catkin_ws/devel_isolated/mavros_msgs;/home/poojith/catkin_ws/devel_isolated/libmavconn;/home/poojith/catkin_ws/devel;/opt/ros/kinetic".split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/poojith/catkin_ws/devel_isolated/pub_sub/env.sh')

output_filename = '/home/poojith/catkin_ws/build_isolated/pub_sub/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    #print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
