cmake_minimum_required(VERSION 3.20)
project(AtlasOfImpossibleWorlds LANGUAGES CXX)

add_executable(atlas src/main.cpp)
target_compile_features(atlas PRIVATE cxx_std_20)