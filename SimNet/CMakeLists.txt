
add_library(SimNet)

target_sources(SimNet
  PRIVATE
    simnet_impl.cxx

  PUBLIC
    FILE_SET HEADERS
    FILES
      simnet.h
)
