cmake_minimum_required(VERSION 3.22)

project(CppExperiments)

#main executable and entry point for CppExperiments is the titular executable
add_executable(CppExperiments)

target_sources(CppExperiments
  PRIVATE
    main.cxx
)

#first library added is SimNet
#Simulates objects moving through a network
# lots of applications:
# - travelling salesman problem and pathfinding
# - factory simulation
# - thermal simulation
# - power grid modelling
#
# lots of challenges (great for studying)
# - data-heavy (learn data-oriented design)
# - compute-heavy (learn multithreading!)
# - abstraction-heavy (get better at architecture)
add_library(SimNet)

target_sources(SimNet
  PRIVATE
    simnet_impl.cxx

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
      include
    FILES
      include/simnet.h
)

#link simnet to CppExperiments
target_link_libraries(CppExperiments
  PRIVATE
    SimNet
)
