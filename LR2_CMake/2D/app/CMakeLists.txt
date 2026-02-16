add_executable(main_app main.cpp)
target_compile_features(main_app PRIVATE cxx_std_17)

if(ENABLE_LIBA)
    target_link_libraries(main_app PRIVATE libA)
    add_definitions(-DUSE_LIBA)
endif()

if(ENABLE_LIBB)
    target_link_libraries(main_app PRIVATE libB)
    add_definitions(-DUSE_LIBB)
endif()

if(ENABLE_LIBC)
    target_link_libraries(main_app PRIVATE libC)
    add_definitions(-DUSE_LIBC)
endif()
