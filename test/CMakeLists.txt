project(${PROJECT_NAME})

add_executable(test_rockpaperscissor_app
  rockpaperscissor.c)

target_link_libraries(test_rockpaperscissor_app
  Unity
  rockpaperscissor)

add_test(rockpaperscissor_test
  test_rockpaperscissor_app)
