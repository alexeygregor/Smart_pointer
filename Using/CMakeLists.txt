set(SOURCE_EXE "main.cpp")		

include_directories(lib)			

add_executable(Using ${SOURCE_EXE})	

add_subdirectory(lib)

target_link_libraries(Using lib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Using PROPERTY CXX_STANDARD 20)
endif()