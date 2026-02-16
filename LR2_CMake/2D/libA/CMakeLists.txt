add_library(libA STATIC
    libA.cpp
    libA.h
)

target_include_directories(libA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(libA PUBLIC cxx_std_17)
