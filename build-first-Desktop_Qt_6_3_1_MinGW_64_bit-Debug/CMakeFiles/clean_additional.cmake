# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\first_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\first_autogen.dir\\ParseCache.txt"
  "first_autogen"
  )
endif()
