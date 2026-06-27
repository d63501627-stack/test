cmake_minimum_required(VERSION 3.15)
project(custom-levels)

find_package(Geode REQUIRED)

add_geode_mod(custom-levels
    SOURCES 
        src/main.cpp
)
