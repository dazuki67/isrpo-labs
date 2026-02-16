add_library(libC STATIC
    libC.cpp
    libC.h
)

target_include_directories(libC PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(libC PUBLIC cxx_std_17)
