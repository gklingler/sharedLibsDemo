cmake_minimum_required(VERSION 3.0)
project(sharedLibs)

# Export no symbols by default (if the compiler supports it).
# This makes e.g. GCC's "visibility behavior" consistent with MSVC's. 
# On Windows/MSVC this is a noop.
set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

# Always include the source and build directories in the include path.
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# create the executable
add_executable(main main.cpp)

# create the shared library
add_library(shared SHARED shared.cpp)

# generate export header automatically
include (GenerateExportHeader)
GENERATE_EXPORT_HEADER(shared
             BASE_NAME shared
             EXPORT_MACRO_NAME SHARED_EXPORT
             EXPORT_FILE_NAME shared_EXPORTS.h
             STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)

# link our executable "main" with the shared library "shared"
target_link_libraries(main shared)