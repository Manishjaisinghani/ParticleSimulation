cmake_minimum_required(VERSION 3.6)
project(sdl_test)


INCLUDE_DIRECTORIES(/usr/local/include/SDL2)
LINK_DIRECTORIES(/usr/local/lib)


set(SOURCE_FILES main.cpp Screen.cpp Screen.h Particle.cpp Particle.h Sworm.cpp Sworm.h)
add_executable(sdl_test ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(sdl_test libSDL2.a)