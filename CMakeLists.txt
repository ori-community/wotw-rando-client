cmake_minimum_required(VERSION 3.31.0)

project(temp)

set(CMAKE_SUPPRESS_REGENERATION true)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DENABLE_FAST_LOAD -DENABLE_MIDI_OUT -DENABLE_MIDI_IN -DDEBUG")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc /nologo")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /PDBCompress")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} /PDBCompress")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /PDBCompress")

set(CMAKE_ROOT_DIRECTORY ${PROJECT_SOURCE_DIR})
set(CMAKE_BUILD_DIRECTORY ${PROJECT_BINARY_DIR})
set(CMAKE_CONFIG_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/config)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/bin)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

message(STATUS "Fetching Tracy")

include(FetchContent)
FetchContent_Declare(
        tracy
        GIT_REPOSITORY https://github.com/wolfpld/tracy.git
        GIT_TAG v0.13.1
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE
        EXCLUDE_FROM_ALL
)
FetchContent_MakeAvailable(tracy)

if (ENABLE_PROFILER)
    message(NOTICE "Enabling profiler")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DENABLE_PROFILER=1 -DTRACY_ENABLE=1")
endif ()

if (NOT WOTWR_INSTALL_DIR)
    set(WOTWR_INSTALL_DIR C:/moon/randomizer/client)
endif ()

set(WOTWR_PROJECTS_DIR ${CMAKE_ROOT_DIRECTORY}/projects)

message(STATUS "Install directory: ${WOTWR_INSTALL_DIR}")
message(STATUS "Root directory: ${CMAKE_ROOT_DIRECTORY}")
message(STATUS "Build directory: ${CMAKE_BUILD_DIRECTORY}")
message(STATUS "Config directory: ${CMAKE_CONFIG_DIRECTORY}")
message(STATUS "Archive directory: ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
message(STATUS "Library directory: ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")
message(STATUS "Runtime directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

set(CMAKE_INSTALL_DEFAULT_COMPONENT_NAME "runtime")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(RandomizerClient)

set(
        WOTWR_BASE_INCLUDES
        "${CMAKE_ROOT_DIRECTORY}/projects"
        "${tracy_SOURCE_DIR}/public"
)

add_subdirectory("projects")

add_custom_target(
        INSTALL_RUNTIME
        ALL
        cmake -DCOMPONENT=runtime -DBUILD_TYPE=$<CONFIG> -P ${CMAKE_BUILD_DIRECTORY}/cmake_install.cmake
        DEPENDS Profiler Modloader Randomizer TAS Injector InjectProxy InjectLoader
)

set_target_properties(
        INSTALL_RUNTIME
        PROPERTIES
        FOLDER CMakePredefinedTargets
)
