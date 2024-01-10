project(${PROJECT_NAME})

add_library(rockpaperscissor rockpaperscissor.c)

target_include_directories(rockpaperscissor
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include)
