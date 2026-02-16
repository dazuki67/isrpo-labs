add_library(libB STATIC
    libB.cpp
    libB.h
)

target_include_directories(libB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(libB PUBLIC cxx_std_17)
