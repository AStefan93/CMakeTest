cmake_minimum_required(VERSION 3.22)

project(CMakeTest)

add_compile_options(-std=c++17 -Wall)
add_link_options(-lstdc++ -lm)

add_subdirectory(src/hello_world)

# Add Gtest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
