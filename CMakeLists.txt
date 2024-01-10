cmake_minimum_required(VERSION 3.28)

project(rockpaperscissor C)

add_subdirectory(src)
add_subdirectory(include)

option(ROCKPAPERSCISSOR_BUILD_EXAMPLE "Wheather or not build examples" NO)

if (ROCKPAPERSCISSOR_BUILD_EXAMPLE)
  message(STATUS "Building examples....")
  add_subdirectory(example)
endif()

option(ROCKPAPERSCISSOR_BUILD_TEST "Wheather or not build test" NO)

if (ROCKPAPERSCISSOR_BUILD_TEST)
  message(STATUS "Building tests....")
  include(CTEST)
  add_subdirectory(lib)
  add_subdirectory(test)
endif()
