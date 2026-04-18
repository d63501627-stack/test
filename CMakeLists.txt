cmake_minimum_required(VERSION 3.13)

project(MyMod)

find_package(Geode REQUIRED)

add_geode_mod(
    ${GEODE_MOD_ID}
    VERSION ${GEODE_MOD_VERSION}
    SOURCES src/main.cpp
)
