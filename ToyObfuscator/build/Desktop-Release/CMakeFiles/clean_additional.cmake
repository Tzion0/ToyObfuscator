# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/ToyObfuscator_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ToyObfuscator_autogen.dir/ParseCache.txt"
  "ToyObfuscator_autogen"
  )
endif()
