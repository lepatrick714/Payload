cmake_minimum_required(VERSION 2.8)
project( Segment )
find_package( OpenCV REQUIRED )
add_executable( Segment sailencySeg.cpp )
target_link_libraries( Segment ${OpenCV_LIBS} )
