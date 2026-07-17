
add_library(SimNet)

target_sources(SimNet
  PRIVATE
    simnet_impl.cxx

  PUBLIC
    FILE_SET HEADERS
    FILES
      simnet.h
)

set(SOURCES Network/network.cxx Network/network.h)
add_subdirectory(Network)

